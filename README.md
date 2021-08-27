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
   ```qmake -project```
3. As we want to compile out project from the command line, we will need to add the following line to our .pro file.
   QT += gui widgets
4. Open the QtFinance-main.pro file in the gedit editor as follows:
   gedit QtFinance-main.pro
