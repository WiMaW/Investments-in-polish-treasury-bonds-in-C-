# PROJECT TITLE: Investments in treasury bonds in C++

#### Video Demo:  https://youtu.be/SrxAJyjuyck
#### Description:

    What for: to have simple, user-friendly program for calculating the return on investment in polisch treasury bonds
    
    Program is written in C++ using separate clasess for every treasury bonds but some methods are inherited from class to class. I started with a creating the most basic class with all needed method. Next classes are only filled with additional method, variables specific to them.
    
    1. main.cpp - displays menu, user inputs two values: number representing each treasury bonds and amount of money, using do... wihle ... loop checks if given inputs are correct (are in a good range and are integers). Then using if statments for every choice object is created and needed methods on that object called.
    
    2. Ots.h - the basic bonds with variables like inrest, time of investment (specific for every bond) and all necessary methods - calculate profit, calculate tax, profit minus tax, display calculations.
    
    3. Tos.h, Ros.h, Ror.h, Rod.h, Edo.h, Dor.h. Coi.h - clasess for other bonds, they only have methods specific to themselves others are inherited using public inheritance. They also have variables like intrest, time of invetment and fee wich has to be paid by investor when he want to withdraw earlier.
    
    User experience: after running the program menu is displayed and user is asked to put two values: integer for choice and integer for amount of money. After that necessary calculations are made and displayed on the screen.
    
    Strong sides: simple to use, quick, do all the math for you and you have clear massage about profits from investments. 
    
    Weak sides: Unfortunately I could not find API to data as infaltion level and National Bank of Poland reference rate witch could change every month. So I put them in main as a global variable. 

