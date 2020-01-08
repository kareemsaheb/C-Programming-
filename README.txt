   31  ssh-keygen -t rsa -C "kareemsaheb10@gmail.com"
   32  cat ~/.ssh/id_rsa.pub 
   33  git clone https://github.com/kareemsaheb/C-Programming-.git
   34  su
   35  git clone https://github.com/kareemsaheb/C-Programming-.git
   36  git
   37  ls
   38  cd C-Programming-/
   39  ls
   40  ls -a
   41  cd .git/
   42  ls
   43  cd ../
   44  git config --list
   45  git config.user "kareem"
   46  git config --global user.email "kareemsaheb10@gmail.com"
   47  git config --global user.name "kareemsaheb shaik"
   48  git config list
   49  git config --list
   51  ls
   52  vim README.txt
   53  git status 
   54  git add README.txt 
   55  git status 
   56  git status .
   57  man git
   58  man git-add
   59  git diff README.txt
   60  vim README.txt 
   61  git status 
   62  git diff README.txt
   63  vim README.txt 
   64  git diff README.txt
   65  git status 
   66  git checkout README.txt
   67  vim README.txt 
   68  git status .
   69  git commit .
   70  git status 
   71  git log
   72  git commit .
   73  git status 
   74  git log
   75  git push origin HEAD
   76  git push -u origin master
   77  git config --list
   78  git config --global remote.origin.url "git@github.com:kareemsaheb/C-Programming-.git"
   79  git config --list
   80  git push -u origin master
   81  cat ~/.ssh/id_rsa.pub 
   82  git status 
   83  git log
   84  git push -u remote master
   85  git push -u origin master
   86  git status 
   87  history


-> git clone <url from ssh in git hub>  ==> it will create repo in local.
   Basic git cammands
    -> git status . [status of current repo untracked modified and deleted files]
    -> git add .  [adding all files from current directory recuresivily.[inside sub directories] file color will change to green]
         -> git diff . [to check the difference of changes before adding. After "git add" git diff will not show changes]
    -> git commit . [commit the change. it will create commit id. file color will not show.
                     Add commit message then save by using ctrl + X then save with Y then just enter for format]
         -> git commit --amend . [if you want to append to the same commit]
         -> git log [to check commit happened or not]
    -> git push -f origin HEAD [to push changes into server(git hub)]
