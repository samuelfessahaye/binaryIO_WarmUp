# Lab 5: Binary File I/O Demo Repository

Welcome to the demo repository for **Lab 5: Binary File I/O**! This README provides instructions on how to fork this repository, make changes, and submit a pull request (PR), as well as a warm up of what students are expected to do for the lab assignment.

## How to Work with This Repository

This section guides you through forking the repository, making edits, and submitting your changes via a pull request.

## Getting Started

1. **Fork and clone** this repo as described above.
2. **Explore** the provided files (`tips.shp`, `main.cpp`). tips is binary and can not be viewed.
3. **Implement** your solution based on the lab requirements.
4. **Test** with the sample files and submit your PR.

**Good luck with Lab 5!** If you have questions, reach out to your instructor or TA.

### 1. Fork the Repository

Forking creates your own copy of this repository under your GitHub account.

1. **Log in to GitHub**: Ensure you're signed into your GitHub account.
2. **Navigate to the Repository**: Go to the main repository page (e.g., `StrongKs/binaryIO_WarmUp`).
3. **Fork the Repo**:
    - Click the **"Fork"** button at the top-right corner of the page.
    - Select your GitHub account as the destination.
    - Wait for the forking process to complete. You'll now have a copy at `your-username/binaryIO_WarmUp`.

### 2. Clone Your Fork

Clone your forked repository to your local machine to start working on it.

1. **Open a Clion Window - New Project with Version Control**: Open a project using version control
2. **Past Github URL**: Copy from your new fork of the repo. Should look like:
   ```
   https://github.com/your-username/binaryIO_WarmUp
   ```
### 3. Make Edits

Make your changes to the code or files as needed for the lab.

1. **Open the Project**: Use your preferred IDE or text editor (e.g., VS Code, Visual Studio).
2. **Edit Files**: Modify the files according to the lab requirements (see "Student Tasks" below).
    - Example: Update `main.cpp` to read and process the binary files.
3. **Test Your Changes**:
    - Compile and run your code locally to ensure it works.

### 4. Commit Your Changes

Save your edits to your local repository.

1. **Stage Changes**:
   ```bash
   git add .
   ```
    - This stages all modified files. Use `git add <filename>` for specific files.
2. **Commit Changes**:
   ```bash
   git commit -m "Add binary file reading functionality"
   ```
    - Write a descriptive commit message explaining your changes.

### 5. Push to Your Fork

Upload your changes to your forked repository on GitHub.

1. **Push Changes**:
   ```bash
   git push origin main
   ```
    - This pushes your commits to the `main` branch of your fork.

### 6. Create a Pull Request (PR)

Submit your changes to the original repository for review.

1. **Go to Your Fork**: Visit `https://github.com/your-username/lab5-demo`.
2. **Start a PR**:
    - Click the **"Contribute"** button or **"Pull requests"** tab.
    - Click **"New pull request"**.
3. **Set the Base Repository**:
    - **Base:** `StrongKs/binaryIO_WarmUp` (original repo), branch `main`.
    - **Head:** `your-username/binaryIO_WarmUp`, branch `main`.
4. **Submit the PR**:
    - Add a title (e.g., "Lab 5 Submission - Your Name") and description.
    - Click **"Create pull request"**.

### Troubleshooting

- **Merge Conflicts**: If your PR has conflicts, resolve them locally with `git pull` and manual editing, then push again.
- **Lost Changes?** Use `git status` and `git log` to track your progress.

---

## Deliverables

- **Modified Files**: Update `main.cpp` (or other files as specified) with your solution.
- **Pull Request**: Submit your changes via a PR to this repository with a clear title (e.g., "Lab 5 - Joshua Fox").

