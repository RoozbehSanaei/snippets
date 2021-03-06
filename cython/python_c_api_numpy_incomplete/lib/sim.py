# lib/sim.py
import numpy as np
class World(object):
    """World is a structure that holds the state of N bodies and
    additional variables.

    threads : (int) The number of threads to use for multithreaded
              implementations.
    dt      : (float) The time-step. 

    STATE OF THE WORLD: 

    N : (int) The number of bodies in the simulation.
    m : (1D ndarray) The mass of each body.
    r : (2D ndarray) The position of each body.
    v : (2D ndarray) The velocity of each body.
    F : (2D ndarray) The force on each body.

    TEMPORARY VARIABLES:

    Ft : (3D ndarray) A 2D force array for each thread's local storage.
    s  : (2D ndarray) The vectors from one body to all others. 
    s3 : (1D ndarray) The norm of each s vector. 

    NOTE: Ft is used by parallel algorithms for thread-local
          storage. s and s3 are only used by the Python
          implementation.
    """
    def __init__(self, N, threads=1, 
                 m_min=1, m_max=30.0, r_max=50.0, v_max=4.0, dt=1e-3):
      self.threads = threads
      self.N  = N
      self.m  = np.random.uniform(m_min, m_max, N)
      self.r  = np.random.uniform(-r_max, r_max, (N, 2))
      self.v  = np.random.uniform(-v_max, v_max, (N, 2))
      self.F  = np.zeros_like(self.r)
      self.Ft = np.zeros((threads, N, 2))
      self.s  = np.zeros_like(self.r)
      self.s3 = np.zeros_like(self.m)
      self.dt = dt

def compute_F(w):
      """Compute the force on each body in the world, w."""
      for i in range(w.N):
            w.s[:] = w.r - w.r[i]
            w.s3[:] = (w.s[:,0]**2 + w.s[:,1]**2)**1.5
            w.s3[i] = 1.0 # This makes the self-force zero.
            w.F[i] = (w.m[i] * w.m[:,None] * w.s / w.s3[:,None]).sum(0)


def evolve(w, steps):
      """Evolve the world, w, through the given number of steps."""
      for _ in range(steps):
            compute_F(w)
            w.v += w.F * w.dt / w.m[:,None]
            w.r += w.v * w.dt