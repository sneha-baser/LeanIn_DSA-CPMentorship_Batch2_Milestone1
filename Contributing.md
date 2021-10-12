

# Contribution Guidelines
> **Note**: Start working once you got first milestone questions. 
-create folder named firstname_lastname
-under this folder contain seperate file for each solution, it should be named as question title ex Find_Middle_Element
  - Extension can be any language like .c, .cpp, .py, etc.
  - Make sure the filename is in the title case
  - Add a comment section at the **top** including an explanation for your algorithm
  - Also add the time and space complexities at the top
- **Do not** overwrite contributions done by other people.



# Contribution Guide
*Make sure you have a GitHub account. In case you don't have one, you can create your account by visiting https://github.com/ and clicking on ``Sign up`` option at the top right corner.*


### 1. Star and Fork this Repository
You can star and fork this repository on GitHub by navigating at the top of this repository.


After forking, you will see two repositories with the same name 'LeanIn_DSA-CPMentorship_Batch2_Milestone1'. 
  - your-username/LeanIn_DSA-CPMentorship_Batch2_Milestone1

You can make changes directly to **your** repository i.e. `your-username/LeanIn_DSA-CPMentorship_Batch2_Milestone1` but you cannot make changes to **this** repository directly. You can contribute here by submitting your changes as `pull requests`.


### 2. Clone the Repository

To make a local copy of the forked repository, let’s first open up a terminal window.

We’ll use the `git clone`  command along with the URL that points to your fork of the repository.

This URL will consist of your username and it will end with `.git`. The URL will look like this: https://github.com/your-username/LeanIn_DSA-CPMentorship_Batch2_Milestone1

You can alternatively copy the URL by clicking on the green “Code” button from your repository page. Once you click the button, you’ll be able to copy the URL by clicking the binder button next to the URL

Once we have the URL, we’re ready to clone the repository. To do this, we’ll combine the git clone command with the repository URL from the command line in a terminal window:

````bash
$ git clone https://github.com/your-username/dsc-hacktoberfest-2021.git
````


### 3. Create a New Branch

To create your branch, from your terminal window, change your directory so that you are working in the directory of the repository. Be sure to use the actual name of the repository to switch into that directory.



Now, we’ll create a new branch with the git branch command. Make sure you name it descriptively so that others working on the project understand what you are working on.
````bash
$ git branch new-branch
````


Now that our new branch is created, we will switch over to it using the git checkout command:
````bash
$ git checkout new-branch
Switched to branch 'new-branch'
````

At this point, you can now modify existing files or add new files to the project on your branch.

#### Make Changes Locally

Once you have modified existing files or added new files to the project, you can add them to your local repository, which you can do with the git add command. Let’s add the -A flag to add all changes that we have made:

````bash
$ git add -A
````
or
````bash
$ git add . 
````

Next, we’ll want to record the changes that we made to the repository with the git commit command.

*The commit message is an important aspect of your code contribution; it helps the other contributors fully understand the change you have made, why you made it, and how significant it is. Additionally, commit messages to provide a historical record of the changes for the project at large, helping future contributors along the way.*


If you have a very short message, you can record that with the -m flag and the message in quotes:

Example:
````bash
$ git commit -m "Updated Readme.md"
[main (root-commit) e024518] Updated Readme.md
1 file changed, 1 insertion(+)...
````

###### At this point, you can use the git push command to push the changes to the current branch of your forked repository:
Example:
````bash
$ git push --set-upstream origin new-branch
````   

### 4. Create Pull Request

At this point, you are ready to make a pull request to the original repository.

Navigate to your forked repository, and press the “New pull request” button on the left-hand side of your repository page.
## 🎉 Hurray! 🎉 
#### You just got closer to completing Milestone1.
