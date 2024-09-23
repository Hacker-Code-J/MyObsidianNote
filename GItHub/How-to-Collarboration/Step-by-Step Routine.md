
To manage the project workflow effectively using **Git** and **GitHub** through the **CLI** or **VS Code**, both the **leader** and **team members** should follow specific routines at the beginning of each step. Below is a detailed step-by-step guide that explains what each person (leader and team members) should do at the start of each phase. I will include both **CLI commands** and **VS Code** actions where applicable.

---

## **Step-by-Step Routine for the Leader**

### **1. Initializing the Project Repository (One-Time Setup)**

#### **CLI Commands**:
1. **Create a New Repository on GitHub**:
   - Go to GitHub and create a new repository (e.g., `multi-precision-int-ops`).
2. **Clone the Repository**:
   ```bash
   git clone https://github.com/yourusername/multi-precision-int-ops.git
   ```
3. **Initialize the Project Structure**:
   - Navigate to the cloned directory:
     ```bash
     cd multi-precision-int-ops
     ```
   - Create the necessary folder structure (`/src`, `/include`, etc.):
     ```bash
     mkdir src include tests
     ```
   - Add initial files (`README.md`, `.gitignore`, etc.), and commit them:
     ```bash
     git add .
     git commit -m "Initial project structure"
     git push origin main
     ```

#### **VS Code Actions**:
1. Open VS Code, then open the cloned folder using `File > Open Folder`.
2. Use VS Code to create new files (e.g., `main.c`, `README.md`) and edit them.
3. Use the **Source Control Panel** on the left sidebar to stage and commit changes.

---

### **2. Setting Up Collaborators**

#### **CLI Commands**: (GitHub actions, not command line)
1. Go to your GitHub repository settings:
   - Click on **Settings** > **Manage Access** > **Invite Collaborators**.
2. Add your team members by their GitHub username or email.

---

### **3. Workflow Routine for Each Development Cycle (Leader)**

#### **Daily or Sprint-Based Routine**:

1. **Pull Latest Changes** (Before making any new changes):
   - Always ensure you have the latest code from `main`:
     ```bash
     git checkout main
     git pull origin main
     ```

2. **Assign Tasks to Team Members**:
   - Open **GitHub Issues** and create issues for tasks like "Implement multi-precision addition."
   - Assign issues to team members.

3. **Review Pull Requests**:
   - When team members open Pull Requests, review their code on GitHub or directly in VS Code using the **GitHub Pull Requests** extension.
   - If everything is good, approve the PR or request changes.

4. **Merge Approved Pull Requests**:
   - After approving the PR on GitHub, click the **Merge** button.
   - After merging, ensure that the `main` branch is up to date:
     ```bash
     git checkout main
     git pull origin main
     ```

---

## **Step-by-Step Routine for Team Members**

### **1. Setting Up the Repository**

#### **CLI Commands**:
1. **Clone the Repository** (from GitHub):
   ```bash
   git clone https://github.com/leaderusername/multi-precision-int-ops.git
   ```
   - This downloads the repository to your local machine.
2. Navigate into the repository:
   ```bash
   cd multi-precision-int-ops
   ```

#### **VS Code Actions**:
1. Open **VS Code** and select `File > Open Folder`, then choose the folder where you cloned the repository.
2. In VS Code, ensure that the **Source Control Panel** is open on the left side to track changes.

---

### **2. Routine for Starting Work on a New Feature or Task**

#### **CLI Commands**:

1. **Pull Latest Changes from the `main` Branch**:
   - Before starting any work, always make sure your local `main` branch is up to date:
     ```bash
     git checkout main
     git pull origin main
     ```

2. **Create a New Branch for the Feature**:
   - Create and switch to a new branch for the specific feature or task:
     ```bash
     git checkout -b feature-bigint-addition
     ```

3. **Start Coding**:
   - Now you can make changes to the code, create new files, or modify existing ones. You can do this either in **VS Code** or via the CLI.

#### **VS Code Actions**:

1. In **VS Code**, check out the `main` branch and update it (use Git integration at the bottom status bar or terminal).
2. Create a **new branch**:
   - Press `Ctrl + Shift + P`, type `Git: Create Branch`, and name it (e.g., `feature-bigint-addition`).
3. Make your changes in VS Code by editing the necessary files.

---

### **3. Routine for Committing Changes**

#### **CLI Commands**:

1. **Stage Your Changes**:
   - Once you've made changes, stage them for commit:
     ```bash
     git add .
     ```

2. **Commit the Changes**:
   - Commit the staged changes with a descriptive message:
     ```bash
     git commit -m "Implemented multi-precision addition"
     ```

#### **VS Code Actions**:
1. Go to the **Source Control Panel** in VS Code, and click the `+` button next to the files to **stage** them.
2. Enter a commit message at the top of the panel and press the **Commit** button.

---

### **4. Routine for Pushing Changes to GitHub**

#### **CLI Commands**:

1. **Push Your Branch to GitHub**:
   ```bash
   git push origin feature-bigint-addition
   ```

#### **VS Code Actions**:
1. After committing, VS Code will prompt you to **push** your branch. If not, use the terminal in VS Code:
   ```bash
   git push origin feature-bigint-addition
   ```

---

### **5. Opening a Pull Request (PR)**

#### **CLI Commands**: (Use GitHub interface, not CLI)
1. After pushing your branch, go to the GitHub repository.
2. Click on **Pull Requests** and open a new PR from your branch (`feature-bigint-addition`) to the `main` branch.
3. Add a description of the changes and request a review.

#### **VS Code Actions**:
1. If using the **GitHub Pull Requests and Issues** extension, you can create a pull request directly from VS Code by navigating to the **Source Control** panel and clicking **Create PR**.

---

### **6. Routine for Updating Your Local Code (After a PR is Merged)**

#### **CLI Commands**:

1. **Switch to the `main` Branch**:
   ```bash
   git checkout main
   ```

2. **Pull the Latest Changes**:
   - After your PR is merged, always pull the latest `main` branch to ensure you're working on the updated code:
     ```bash
     git pull origin main
     ```

#### **VS Code Actions**:
1. In VS Code, use the **Git Status Bar** at the bottom to switch back to `main`.
2. Use the **Source Control** panel or terminal to pull the latest changes.

---

### **7. Resolving Merge Conflicts**

If you have conflicts when merging or pulling, Git will flag these files.

#### **CLI Commands**:

1. **Identify and Open Conflicted Files**:
   - Git will show you the conflicted files. Open them in **VS Code** or the CLI:
     ```bash
     git status
     ```

2. **Resolve the Conflicts**:
   - Manually edit the conflicted sections of the file (marked by `>>>>>>>>`,  =========== =, `<<<<<<<<<<<<<<<<<<`)
   - After resolving, stage the file:
     ```bash
     git add <file>
     ```

3. **Commit the Resolved Conflict**:
   ```bash
   git commit -m "Resolved merge conflict in <file>"
   ```

#### **VS Code Actions**:
1. In VS Code, conflicts will appear with special markers in the file `>>>>>>>>`,  =========== =, `<<<<<<<<<<<<<<<<<<`
2. You can use the **inline conflict resolution** feature to choose **"Accept Current Change"**, **"Accept Incoming Change"**, or **"Merge Changes"**.
3. Once the conflicts are resolved, go to the **Source Control** panel to stage and commit the resolved files.

---

### **8. Ending a Feature Branch**

#### **CLI Commands**:

1. **Delete a Branch Locally** (Optional after merging):
   ```bash
   git branch -d feature-bigint-addition
   ```

2. **Delete a Branch on GitHub** (Optional after merging):
   ```bash
   git push origin --delete feature-bigint-addition
   ```

#### **VS Code Actions**:
1. After a successful merge, you can delete the local branch using the Git status bar in VS Code.
2. If needed, go to **GitHub** and delete the branch on the repository interface.

---

## **Summary Routine for the Leader and Team Members**

1. **Before Starting Work**:
   - Pull the latest changes from `main`.
   - Create a new feature branch for the task.
  
2. **During Work**:
   - Make changes, commit frequently.
   - Push your branch to GitHub.
   - Open a PR for review.

3.

 **After a PR is Merged**:
   - Pull the latest changes from `main`.
   - Delete the feature branch (optional).

By following these routines, both the leader and team members can collaborate efficiently using Git, GitHub, and VS Code.