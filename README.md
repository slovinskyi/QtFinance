# QtFinance
Home budget application (C++ &amp; Qt Framework)

# Installation on Linux
*** The first way ***
1. Download all files;
2. Open project_draft.pro file in Qt Creator;
3. If you want to run our application please press CTRL+R;

*** The second way ***
1. Download all files;
2. Run the following command in order to create a Qt Project file:
   ```$ qmake -project```
3. As we want to compile out project from the command line, we will need to add the following line to our .pro file.
   ```QT += gui widgets```
4. Open the QtFinance-main.pro file in the gedit editor as follows:
   ```$ gedit QtFinance-main.pro```
5. To make the .pro file platform specific, you need to run the following command on the project file: ```$ qmake QtFinance-main.pro``` This will create a file by the name of “Makefile” in the project directory. You can verify this by running the ls command, just as I did.
6. The following make command will help you in compiling the Makefile into an executable program. ```$ make```
7. Finally, we are ready to run the executable file we created in the last step through the Terminal. Run the following command to do so: ```$ ./QtFinance-main```

# Application interface
Main window:

