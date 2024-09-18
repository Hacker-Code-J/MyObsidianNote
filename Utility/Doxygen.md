
### Step 1: Install Doxygen
First, you need to install Doxygen. Open your terminal and run the following command based on your Linux distribution:

#### For Debian/Ubuntu-based systems:
```bash
sudo apt-get update
sudo apt-get install doxygen
```

#### For Red Hat/CentOS/Fedora-based systems:
```bash
sudo dnf install doxygen
```

#### For Arch Linux-based systems:
```bash
sudo pacman -S doxygen
```

### Step 2: Install Graphviz (Optional)
Doxygen can generate diagrams like class hierarchies if Graphviz is installed. To install Graphviz:

#### For Debian/Ubuntu:
```bash
sudo apt-get install graphviz
```

#### For Red Hat/CentOS/Fedora:
```bash
sudo dnf install graphviz
```

#### For Arch Linux:
```bash
sudo pacman -S graphviz
```

### Step 3: Create a Doxyfile (Configuration File)
The `Doxyfile` is a configuration file used by Doxygen to control the output.

1. Navigate to your project's root directory or wherever you want to generate documentation.
2. Run the following command to create a default `Doxyfile`:
   ```bash
   doxygen -g
   ```

This generates a file named `Doxyfile` in the current directory. You can edit this file to configure the documentation process, such as specifying which files to include, output formats, and more.

### Step 4: Configure the Doxyfile
Open the `Doxyfile` in a text editor to customize the configuration. Common configurations include:

- **Project Name**: Set the project name.
  ```bash
  PROJECT_NAME = "Your Project Name"
  ```

- **Input Directory**: Specify the directory where your source code files are located.
  ```bash
  INPUT = src/
  ```

- **Output Directory**: Specify the output directory for the generated documentation.
  ```bash
  OUTPUT_DIRECTORY = docs/
  ```

- **Generate HTML and/or LaTeX/PDF**: Choose the output format (HTML, LaTeX, etc.).
  ```bash
  GENERATE_HTML = YES
  GENERATE_LATEX = YES
  ```

- **Include Diagrams**: If you have Graphviz installed, you can enable diagrams.
  ```bash
  HAVE_DOT = YES
  ```

### Step 5: Annotate Your Source Code
To generate documentation, you need to annotate your source code using Doxygen comments. Doxygen recognizes specific comment formats, such as:

#### For C/C++ code:
```cpp
/**
 * \brief A brief description of the function.
 *
 * A detailed description of the function.
 *
 * \param x Description of the parameter x.
 * \param y Description of the parameter y.
 * \return Description of the return value.
 */
int add(int x, int y) {
    return x + y;
}
```

### Step 6: Generate Documentation
After annotating your source code and configuring the `Doxyfile`, you can generate the documentation by running:

```bash
doxygen Doxyfile
```

Doxygen will read the configuration file and process the source files. The documentation will be generated in the output directory specified in the `Doxyfile` (e.g., `docs/`).

### Step 

7: View the Generated Documentation

If you enabled HTML output, you can view the documentation in a web browser:

1. Navigate to the output directory specified in the `Doxyfile` (e.g., `docs/html`).
2. Open the `index.html` file using any web browser:
   ```bash
   firefox docs/html/index.html
   ```
   Or for Google Chrome:
   ```bash
   google-chrome docs/html/index.html
   ```

If you also generated LaTeX, you can compile it into a PDF using `pdflatex` or another LaTeX tool.

### Optional: Automate Documentation Generation

You can automate the process of generating documentation by adding a script or Makefile target in your project. Here’s an example using a Makefile:

```makefile
docs:
    doxygen Doxyfile
```

Now, you can run `make docs` to generate the documentation.

### Summary

1. **Install Doxygen**: Use your package manager to install it.
2. **Create a Doxyfile**: Run `doxygen -g` to generate the configuration file.
3. **Configure Doxyfile**: Customize the file for your project (e.g., input/output directories).
4. **Annotate Your Code**: Add Doxygen-compatible comments in your source files.
5. **Generate Documentation**: Run `doxygen Doxyfile` to generate the documentation.
6. **View Documentation**: Open the generated `index.html` file in your browser.

This process allows you to generate detailed documentation for your project, making it easier for others (or yourself) to understand and maintain the code.