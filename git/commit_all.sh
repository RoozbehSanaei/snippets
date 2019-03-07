repository_name=testy
git config --global credential.helper cache
git init
git add *
git commit -a -m "adding files"
git remote add $repository_name https://github.com/RoozbehSanaei/$repository_name.git
git remote -v
git push -u $repository_name master