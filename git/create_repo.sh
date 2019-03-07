repository_name=testy
curl -u 'RoozbehSanaei' https://api.github.com/user/repos -d '{"name":"testy"}' 
git config credential.helper store
git init
git add * -u
git commit -m "adding files"
git remote add $repository_name https://github.com/RoozbehSanaei/$repository_name.git
git remote -v
git push -u $repository_name master