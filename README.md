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
5. To make the .pro file platform specific, you need to run the following command on the project file:
 
   ```$ qmake QtFinance-main.pro``` 
 
   This will create a file by the name of “Makefile” in the project directory. You can verify this by running the ls command,    just as I did.
   
6. The following make command will help you in compiling the Makefile into an executable program. 

   ```$ make```

7. Finally, we are ready to run the executable file we created in the last step through the Terminal. Run the following command to do so: 
 
   ```$ ./QtFinance-main```

# Application interface
After program running, the following window will be displayed:
![Image of main window](https://github.com/slovinskyi/QtFinance/blob/main/images/mainwindow.png)

If we want to add expenditure we should choose one of the following category:
1. Food (Artukuły spożywcze);
2. Drugstore (Drogeria);
3. Fashion (Moda);
4. Bills (Rachunki);
5. Restaurants (Restauracje);
6. Entertainments (Rozrywka);
7. Transport;
8. Barber Shop & Beauty Shop;
9. Health (Zdrowie);
10. Non-categories (Bez kategorii);

If we choose Food category we will see the following dialog window:
![Image of food 01](https://github.com/slovinskyi/QtFinance/blob/main/images/food_dialog_01.png)

If we want to add some expenditure please press 'Add':
![Image of food 02](https://github.com/slovinskyi/QtFinance/blob/main/images/food_dialog_02.png)

After adding all of food expenditure we will see the following summarizing table:
![Image of food 03](https://github.com/slovinskyi/QtFinance/blob/main/images/food_dialog_03.png)

If we press 'Sum' we will see total food expenditure:
![Image of food 04](https://github.com/slovinskyi/QtFinance/blob/main/images/food_dialog_04.png)

If we want to generate pdf report we should press 'PDF':
![Image of pdf](https://github.com/slovinskyi/QtFinance/blob/main/images/food_report.png)



