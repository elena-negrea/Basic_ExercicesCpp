Basic Programming Exercises
This repository has basic exercises for c++

File organisation:
Basics/
│ 
├── README.md 
├── ex01_max.cpp 
├── ex02_min.cpp 
├── ex03_even_odd.cpp 
├── ex04_array_sum.cpp 
└── ex05_array_max.cpp

Every exercise can have his own main
Rule: one exercise = one file.cpp = separated program
At the compile we will compile just the exercise we whant to run
Dont't compile together
Don't use "using nnamespace std;" to not have conflicts with names

convention:
ex01_name.cpp 

ABOUT GIT:
git init -> innitialies Git in the folder = This creates a local Git repository in the current folder.
            Git can now start tracking changes made to the project files.

git status -> verify status

git add . -> Add all current project files to the staging area
            The . means "all files and folders in the current directory".
            The staging area contains the changes that will be included in the next commit.

git commit -m "Initial commit" -> Create the first commit.A commit saves a snapshot of the staged changes in the Git history.
                                The -m option lets us write the commit message directly in the command.

Connect the local repository to the repository created on GitHub:

git remote add origin https://github.com/USERNAME/REPOSITORY.git -> remote represents a repository stored somewhere else, such as GitHub.
                                                                    origin is the conventional name used for the main remote repository.

git remote -v ->This shows the remote repository addresses currently connected to the local project.=

git branch -M main ->Set the main branch name to main. branch is used to manage Git branches.

git push -u origin main -> Upload the local commits to GitHub:
                            push sends local commits to the remote repository.
                            origin specifies which remote repository to use.
                            main specifies which branch to upload.
                            The -u option connects the local main branch to origin/main.

    Because of this, future uploads can usually be done with just:
git push



In the future: 
- we can have separated folders for each subject
- we can make a header file with all our functions if we want to call them together 