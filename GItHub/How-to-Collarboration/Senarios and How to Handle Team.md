#github
# Table of Contents
- [Initial Setup for All Team Members (Including the Leader)](#Initial Setup for All Team Members (Including the Leader))
- [Step-by-Step for the Leader: Setting Up the Project on GitHub](#Step-by-Step for the Leader: Setting Up the Project on GitHub)
- [Step-by-Step for Team Members: Working with VS Code and GitHub](#Step-by-Step for Team Members: Working with VS Code and GitHub)
- [Leader’s Responsibility: Reviewing and Merging PRs](#Leader’s Responsibility: Reviewing and Merging PRs)
- [Common Scenarios and How to Handle Them](#Common Scenarios and How to Handle Them)

## Initial Setup for All Team Members (Including the Leader)

1. **Install Required Tools**:
   - **VS Code**: Download and install from [VS Code Website](https://code.visualstudio.com/).
   - **Git**: Download and install from [Git Website](https://git-scm.com/).
   - **GitHub Account**: Each team member should create an account at [GitHub](https://github.com/).

2. **Install the VS Code Extensions**:
   - **GitHub Pull Requests and Issues**: Helps manage pull requests, issues, and comments directly from VS Code.
   - **GitLens**: Provides advanced Git functionality, such as commit history, blame annotations, etc.
   - **Git Graph**: Visualize the branch history graphically.

3. **Configure Git in VS Code**:
   - Open **Command Palette** (`Ctrl + Shift + P` on Windows/Linux or `Cmd + Shift + P` on macOS).
   - Run `Git: Show Git Output` to ensure Git is working properly.
   - Set your username and email for Git (this will apply globally for all projects):
     ```bash
     git config --global user.name "Your Name"
     git config --global user.email "your_email@example.com"
     ```

4. **Clone the Repository** (Team Members):
   Once the repository is created (explained below), each team member can clone it by:
   - Opening **Command Palette** (`Ctrl + Shift + P`).
   - Running `Git: Clone` and entering the GitHub repository URL.
   - VS Code will prompt you to choose a directory to clone the repository into.

---

## Step-by-Step for the Leader: Setting Up the Project on GitHub

### **1. Create a GitHub Repository**:
   - Go to GitHub and create a new repository (e.g., `multi-precision-int-ops`).
   - Add a **README**, and a **.gitignore** (select **C** as the language).
   - Optionally, add a **LICENSE** like MIT or Apache 2.0.

### **2. Set Up the Repository in VS Code**:
   - Clone the repository to your local machine using:
     ```bash
     git clone https://github.com/yourusername/multi-precision-int-ops.git
     ```
   - Open the folder in **VS Code** using `File > Open Folder`.

### **3. Initialize the Project Structure**:
   - Create your folder structure (e.g., `/src`, `/include`, `/tests`, etc.).
   - Add some initial files like `README.md` and `.gitignore` (if not already present).
   - Write an initial `main.c` or starter files.
   - Add, commit, and push the changes:
     ```bash
     git add .
     git commit -m "Initial project structure"
     git push origin main
     ```

### **4. Add Collaborators**:
   - On GitHub, go to **Settings > Manage Access** and invite your team members as collaborators by their GitHub usernames or email addresses.

### **5. Define a Git Workflow for the Team**:
   Decide on the **Git Workflow** your team will follow. A simple **Feature Branch Workflow** might work best:
   - **`main` branch**: Always contains stable code.
   - **Feature branches**: Each team member works on separate branches (e.g., `feature-bigint-addition`).

Explain the following to your team:
- Always **create a new branch** when starting a task or feature.
- **Push** the branch to GitHub.
- **Open a Pull Request** for review before merging to `main`.

### **6. Open Issues and Assign Tasks**:
   - On GitHub, create **Issues** for each task (e.g., "Implement multi-precision addition").
   - **Assign** tasks to team members via the GitHub issue tracker.

---

## Step-by-Step for Team Members: Working with VS Code and GitHub

### **1. Cloning the Repository**:
   - Open VS Code and **clone** the repository by pressing `Ctrl + Shift + P` and selecting `Git: Clone`.
   - Paste the repository URL provided by the leader:
     ```bash
     https://github.com/yourusername/multi-precision-int-ops.git
     ```
   - Choose a folder to clone the project into.

### **2. Creating a Feature Branch**:
   - Each team member should **create a new branch** for the task they're working on (never work directly on `main`).
   - In VS Code, open **Command Palette** (`Ctrl + Shift + P`), type `Git: Create Branch`, and name the branch (`feature-bigint-addition`).
   - Alternatively, you can create a branch from the terminal:
     ```bash
     git checkout -b feature-bigint-addition
     ```

### **3. Making Changes in VS Code**:
   - **Write code** in VS Code. You’ll see real-time Git status in the source control panel on the left sidebar.
   - **Stage your changes** by clicking on the **Source Control** icon or using the terminal:
     ```bash
     git add .
     ```
   - **Commit your changes** with a message:
     ```bash
     git commit -m "Implemented bigint addition"
     ```

### **4. Pushing Changes to GitHub**:
   - Once changes are committed, **push** the branch to GitHub:
     ```bash
     git push origin feature-bigint-addition
     ```
   - VS Code will often prompt you to push directly after committing.

### **5. Opening a Pull Request (PR)**:
   - Go to GitHub and **open a Pull Request** (PR) from your branch to the `main` branch.
   - Provide a clear description of what you’ve done.
   - Request a review from the project lead or another team member.

---

## Leader’s Responsibility: Reviewing and Merging PRs

### **1. Reviewing Pull Requests**:
   - When a team member opens a **Pull Request**, review their code on GitHub.
   - You can view the changes, leave comments, or suggest improvements.
   - If everything looks good, approve the PR.

### **2. Merging Pull Requests**:
   - After approving, merge the PR into the `main` branch using the **Merge** button.
   - Optionally, delete the feature branch after merging to keep things clean.

---

## Common Scenarios and How to Handle Them

### **1. Resolving Merge Conflicts**:
   When multiple members modify the same file, Git may throw a **merge conflict**.

1. **Pull Latest Changes**:
   ```bash
   git pull origin main
   ```
2. Git will show the files with conflicts. Open these files in VS Code, and you'll see conflict markers like:
```
<<<<<<< HEAD
Your changes
=======
Incoming changes
>>>>>>> feature-branch
```

3. **Resolve the conflict** by editing the file manually to merge the changes.
4. **Stage the resolved files**:
   ```bash
   git add <file>
   ```
5. **Commit the resolution**:
   ```bash
   git commit -m "Resolved merge conflict"
   ```

6. **Push the changes** and complete the merge.

---

### **2. Staying Updated with the Latest Code**:
   Before starting work on a new feature, team members should always pull the latest changes from `main`:
   ```bash
   git checkout main
   git pull origin main
   ```

### **3. Working with Issues**:
   - Track your work by assigning yourself to **GitHub Issues**.
   - Link pull requests to issues by including the issue number in the PR description:
     ```text
     Closes #42
     ```
   - GitHub will automatically close the issue when the PR is merged.

### **4. Using GitHub from VS Code**:
   - **Creating Issues**: You can create and manage GitHub issues directly from VS Code using the **GitHub Pull Requests and Issues** extension.
   - **Managing Pull Requests**: Use the same extension to review and merge pull requests directly in VS Code.

---

### Summary Workflow for Each Team Member:

1. **Pull** latest changes from `main`.
2. **Create a new branch** for your task.
3. Make changes and **commit** your code frequently.
4. **Push** your branch to GitHub.
5. Open a **Pull Request** for review.
6. **Resolve conflicts** if necessary.
7. The leader reviews and **merges** the pull request into `main`.

By following this guide, your team will have a professional, streamlined workflow using VS Code and GitHub, promoting effective collaboration on your multi-precision integer operations project.