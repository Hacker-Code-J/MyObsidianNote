#github

Here's a simple **scenario** for GitHub collaboration involving **one team leader** and **two team members**, where everyone participates in development and codes directly. The workflow will cover creating feature branches, pushing changes, reviewing code, and merging pull requests.

The table is organized in two sections: **CLI (Command Line Interface)** and **VS Code** actions. Each stage lists both the leader’s and members' roles in a typical collaboration flow.

---

### **GitHub Collaboration Workflow (CLI Version)**

| **Stage**                              | **Team Leader (CLI)**                                                                                              | **Team Members (CLI)**                                                                                             |     |     |     |
| :------------------------------------- | :----------------------------------------------------------------------------------------------------------------- | :----------------------------------------------------------------------------------------------------------------- | --- | --- | --- |
| **1. Repository Setup**                |                                                                                                                    |                                                                                                                    |     |     |     |
| ***Create GitHub Repository***         | Create a new GitHub repository, <br>e.g., `bigint-operations`.                                                     | Accept the repository invitation from the leader.                                                                  |     |     |     |
|                                        | Push initial project structure <br>(`README.md`, `.gitignore`).                                                    | Clone the repository locally:                                                                                      |     |     |     |
|                                        | `git clone https://github.com/....git`                                                                             | `git clone https://github.com/....git`                                                                             |     |     |     |
| **2. Starting Feature Work**           |                                                                                                                    |                                                                                                                    |     |     |     |
| ***Pull Latest Changes***              | Pull latest changes from `main` branch:<br>`git pull origin main`                                                  | Pull latest changes from `main` before starting work:<br>`git pull origin main`                                    |     |     |     |
| ***Create a Feature Branch***          | Create a new branch for the task:<br>`git checkout -b feature-...`                                                 | Create a new branch for your feature:<br>`git checkout -b feature-...`                                             |     |     |     |
| **3. Writing Code & Committing**       |                                                                                                                    |                                                                                                                    |     |     |     |
| ***Write Code***                       | Implement ... .                                                                                                    | Implement ... .                                                                                                    |     |     |     |
| ***Stage and Commit Changes***         | Add and commit changes:<br>`git commit -m "Implement ..."`                                                         | Add and commit changes:<br>`git commit -m "Implement ..."`                                                         |     |     |     |
| **4. Pushing Branches**                |                                                                                                                    |                                                                                                                    |     |     |     |
| ***Push Branch to GitHub***            | Push the feature branch to GitHub:<br>`git push origin feature-...`                                                | Push the feature branch to GitHub:<br>`git push origin feature-...`                                                |     |     |     |
| **5. Collaborating via PRs**           |                                                                                                                    |                                                                                                                    |     |     |     |
| ***Open a Pull Request (PR)***         | Open a PR for `feature-...` on GitHub.                                                                             | Open a PR for `feature-...` on GitHub.                                                                             |     |     |     |
| ***Review and Approve PRs***           | Review and approve team member PRs.                                                                                | Review teammate PRs if requested.                                                                                  |     |     |     |
|                                        | Request changes if necessary.                                                                                      | Make requested changes if applicable.                                                                              |     |     |     |
| ***Merge PR***                         | Merge the PR into the `main` branch after approval.                                                                | Wait for approval and merge of the PR.                                                                             |     |     |     |
| **6. Branch Cleanup**                  |                                                                                                                    |                                                                                                                    |     |     |     |
| ***Delete Local and Remote Branches*** | After merging, delete the feature branch:<br>`git branch -d feature-...`<br>`git push origin --delete feature-...` | After merging, delete the feature branch:<br>`git branch -d feature-...`<br>`git push origin --delete feature-...` |     |     |     |


---

### **GitHub Collaboration Workflow (VS Code Version)**

| **Stage**                        | **Team Leader (VS Code)**                                        | **Team Members (VS Code)**                                   |
|-----------------------------------|------------------------------------------------------------------|--------------------------------------------------------------|
| **1. Repository Setup**           |                                                                  |                                                              |
| **Create GitHub Repository**      | - Create a new GitHub repository, e.g., `bigint-operations`.     | - Accept the repository invitation from the leader.           |
|                                   | - Push initial files via **Source Control Panel** in VS Code.    | - Clone the repository using **View > Command Palette**:      |
|                                   |                                                                  | `Git: Clone` and enter the repository URL.                    |
| **2. Starting Feature Work**      |                                                                  |                                                              |
| **Pull Latest Changes**           | - Open **Source Control** tab and **pull latest changes** from `main`. | - Open **Source Control** and **pull latest changes** from `main`. |
| **Create a Feature Branch**       | - Create a new branch via **Command Palette** (`Ctrl + Shift + P`): | - Create a new branch via **Command Palette** (`Ctrl + Shift + P`): |
|                                   | `Git: Create Branch` and name it `feature-subtraction`.           | `Git: Create Branch` and name it `feature-addition`.           |
| **3. Writing Code & Committing**  |                                                                  |                                                              |
| **Write Code**                    | - Edit code in VS Code, adding multi-precision subtraction logic. | - Edit code in VS Code, adding multi-precision addition logic. |
| **Stage and Commit Changes**      | - Use **Source Control** panel to **stage files** and **commit**: | - Use **Source Control** panel to **stage files** and **commit**: |
|                                   | Enter a commit message: `Implement subtraction`.                 | Enter a commit message: `Implement addition`.                |
| **4. Pushing Branches**           |                                                                  |                                                              |
| **Push Branch to GitHub**         | - Push branch to GitHub via **Source Control**.                  | - Push branch to GitHub via **Source Control**.               |
|                                   | - VS Code will prompt to push if not automatic.                  |                                                              |
| **5. Collaborating via PRs**      |                                                                  |                                                              |
| **Open a Pull Request (PR)**      | - Open a **Pull Request** from **GitHub** UI or via **VS Code GitHub Extension**. | - Open a **Pull Request** from **GitHub** UI or via **VS Code GitHub Extension**. |
| **Review and Approve PRs**        | - Review and approve PRs directly in VS Code using **GitHub PR Extension**. | - Review teammate’s PRs if requested.                        |
|                                   | - Provide feedback via **comments** if changes are required.     |                                                              |
| **Merge PR**                      | - After approval, merge the PR into `main` on GitHub or VS Code. | - Wait for the leader’s approval and PR merge.                |
| **6. Branch Cleanup**             |                                                                  |                                                              |
| **Delete Local and Remote Branches** | - After merging, delete the local and remote branches via **Source Control**: | - After merging, delete the local and remote branches via **Source Control**: |
|                                   | `Git: Delete Branch` or using **Command Palette**.               | `Git: Delete Branch` or using **Command Palette**.            |

---

### **Summary of Key Steps**

1. **Repository Setup**: The leader creates a GitHub repository and invites team members. Members clone the repo.
2. **Feature Branching**: All participants work on separate feature branches to develop different parts of the project.
3. **Committing Changes**: Each member commits their work regularly and pushes their branch to GitHub.
4. **Pull Requests**: Members open pull requests (PRs) for code review. PRs are reviewed and merged into the main branch.
5. **Branch Cleanup**: After merging, the feature branches are deleted locally and remotely to keep the repo clean.

Both the **CLI** and **VS Code** workflows are fairly similar, and participants can choose the method they're more comfortable with. The key difference is that **VS Code** provides a more **graphical interface** for Git operations, while the **CLI** provides more control via command-line inputs.