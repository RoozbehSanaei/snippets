git config --global user.email "Roozbeh.Sanaei2@gmail.com"
git config --global user.name "RoozbehSanaei"
repository_name=Examples
git config --global credential.helper cache
git init
git add *
git commit -a -m "commit message"
git remote add $repository_name https://gitlab.com/RoozbehSanaei/Examples.git
git remote -v
git push -u $repository_name master
