# QtFinance
Home budget desktop application (C++ & Qt Framework)

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

# Application interface ENG (Polish version below)
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

We can add other types of expenditures in a similar way. If we want to add income we should press 'Dochód'. Example is presented by following screenshot:
![Image of income](https://github.com/slovinskyi/QtFinance/blob/main/images/income.png)

If we want to see total analysis of our budget we should press 'Analiza finansowa'. Example analysis is presented by following screenshot:
![Image of analysis](https://github.com/slovinskyi/QtFinance/blob/main/images/analysis.png)

If we want to generate PDF report we should press 'PDF':
![Image of analysis PDF](https://github.com/slovinskyi/QtFinance/blob/main/images/analysis_PDF.png)

Our application lets generate bar chart of our budget. For this you should press 'MAKE':
![Image of chart](https://github.com/slovinskyi/QtFinance/blob/main/images/chart.png)

This bar chart we can save as PDF file (with some commentary). For this you should press 'Insert':
![Image of chart PDF](https://github.com/slovinskyi/QtFinance/blob/main/images/raport_export.png)
![Image of chart report PDF](https://github.com/slovinskyi/QtFinance/blob/main/images/chart_PDF.png)


# Application interface PL
Po uruchomieniu programu wyświetli się następujące okno (jest główne okno aplikacji)
![Image of main window](https://github.com/slovinskyi/QtFinance/blob/main/images/mainwindow.png)

Jeśli chcemy dodać sumy wydatków należy wybrać jedną z poniższych kategorii wydatków:
1. Artukuły spożywcze;
2. Drogeria;
3. Moda;
4. Rachunki;
5. Restauracje;
6. Rozrywka;
7. Transport;
8. Barber Shop & Uroda;
9. Zdrowie;
10. Bez kategorii;

Jeśli wybierzemy kategorię 'Artykuły spożywcze' wyświetli się następujące okienko:
![Image of food 01](https://github.com/slovinskyi/QtFinance/blob/main/images/food_dialog_01.png)

Aby dodać pewien rodzaj wydatku należy wcisnąć 'Add'
![Image of food 02](https://github.com/slovinskyi/QtFinance/blob/main/images/food_dialog_02.png)

Po dodaniu wszystkich wydatków na jedzenie zobaczymy następną podsumowującą tabelę:
![Image of food 03](https://github.com/slovinskyi/QtFinance/blob/main/images/food_dialog_03.png)

W kolejnym kroku należy zaznaczyć wydane kwoty a następnie wcisnąć 'Sum'. W rezultacie w wierszu 'Total' zobaczymy całkowitą wartość wydatków na jedzenie. 
Przykładową tabelę reprezentuje poniższy rysunek:
![Image of food 04](https://github.com/slovinskyi/QtFinance/blob/main/images/food_dialog_04.png)

Jeśli chcemy dostać PDF-kopię tabeli wciskamy 'PDF':
![Image of pdf](https://github.com/slovinskyi/QtFinance/blob/main/images/food_report.png)

Podobnie postępujemy w przypadku innych kategorii. Jeśli chcemy dodać dochód należy kliknąć 'Dochód' oraz wpisać potrzebną kwotę. Poniższy zrzut ekranu reprezentuje 
wyżej opisane działanie:

![Image of income](https://github.com/slovinskyi/QtFinance/blob/main/images/income.png)

W przypadku gdy chcemy wyświetlić wynik analizy globalnej należy wcisnąć 'Analiza finansowa'. Przykład reprezentuje poniższy rysunek:
![Image of analysis](https://github.com/slovinskyi/QtFinance/blob/main/images/analysis.png)

Jeśli chcemy wygenerować PDF-kopię należy wcisnąć 'PDF':
![Image of analysis PDF](https://github.com/slovinskyi/QtFinance/blob/main/images/analysis_PDF.png)

Aplikacja pozwala na wygenerowanie diagramu słupkowego. W tym celu należy wcisnąć 'MAKE':
![Image of chart](https://github.com/slovinskyi/QtFinance/blob/main/images/chart.png)

Uzyskany na podstawie analizy globalnej wykres słupkowy możemy zapisać do pliku PDF wraz z komentarzem.
![Image of chart PDF](https://github.com/slovinskyi/QtFinance/blob/main/images/raport_export.png)
![Image of chart report PDF](https://github.com/slovinskyi/QtFinance/blob/main/images/chart_PDF.png)





