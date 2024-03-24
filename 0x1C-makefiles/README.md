***c-makefiles***
Makefiles are used to help decide which parts of a large program need to be recompiled.

Most Common/Useful Rules:

all: This rule is used to build all targets specified in the Makefile. It typically depends on the main target or executable.
clean: This rule is used to remove all generated files and directories created during the build process, such as object files, executables, and temporary files.
install: This rule is used to install the built software or files into the system or designated directories.
distclean: This rule is similar to the clean rule but also removes any files or directories created during the configuration process, effectively restoring the project to its original state.


Variables in Makefiles:

Variables: Variables in Makefiles are used to store values that can be referenced throughout the Makefile. They are typically used to store compiler options, file lists, or other values used during the build process.
Setting Variables: Variables can be set in Makefiles using the syntax VARIABLE_NAME = value. Optionally, variables can also be set on the  Variables: Variables can be referenced in Makefilcommand line using make VARIABLE_NAME=value.
Usinge rules and commands using the syntax $(VARIABLE_NAME). This allows for easy reuse of values and ensures consistency throughout the Makefile.
