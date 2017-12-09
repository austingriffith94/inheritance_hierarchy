# inheritance_hierarchy
An old Bank of America coding test.

## Inheritance Hierarchy
Multiple classes of functions that are called by a main class through virtual functions.

        int main()
    {
        //------------part 1------------//
        //intialize variables
        string check;
        double x;
        double a1;
        double a2;

        //determines whether to use test values or input values
        //input either 'y' or 'n'
        cout << "Do you want to input values? (y/n)" << endl;
        cin >> check;
        cout << endl;

        if(check == "y")
        {
            //input to command window
            cout << "Input X value: " << endl;
            cin >> x;
            cout << "Input coefficient value: " << endl;
            cin >> a1;
            cout << "Input another coefficient value: " << endl;
            cin >> a2;
            cout << endl;
        }

        else //if anything other than 'y' is input
        {
            //test run values
            x = 2.0;
            a1 = 3.5;
            a2 = 2.5;
        }

        //initalizes function classes
        linear lin1(a1);
        linear lin2(a2);
        quadratic quad1;
        quadratic2 quad2(a1,a2);

        //outputs check of function classes
        cout << "X = " << x << endl << endl;
        cout << "Functions:" << endl;
        cout << a1 << "*X = " << lin1.value(x) << endl;
        cout << a2 << "*X = " << lin2.value(x) << endl;
        cout << "X*X = " << quad1.value(x) << endl;
        cout << a1 << "*X*X + " << a2*a2 << "*X + "
        << exp(a1/a2) << " = " << quad2.value(x) << endl << endl;


        //------------part 2------------//
        //initializes sumoffunction with other classes
        sumoffunction sumfunc;
        sumfunc.addfunc(new quadratic);
        sumfunc.addfunc(new linear(a1));
        sumfunc.addfunc(new linear(a2));
        sumfunc.addfunc(new quadratic2(a1,a2));

        //checks sumoffunctions class addition
        cout << "Sum of the functions: " << sumfunc.value(x)
        << endl << endl;


        //------------part 3------------//
        //sets pointer values for main function
        //uses classes from part 1 and 2
        mfunc* sumptr = &sumfunc;
        mfunc* quadptr = &quad1;

        //gets difference between class functions
        double diff = difference(x, sumfunc, quad1);
        double diff_ptr = difference(x, sumptr, quadptr);

        cout << "Difference between sum of functions" << endl;
        cout << "and square of X, w/ pointers: " << diff_ptr << endl;

        cout << "Difference between sum of functions" << endl;
        cout << "and square of X, w/out pointers: " << diff << endl;

        return 0;
    }

## Sums of Functions
Holds a vector of pointers to objects from the
classes set up in the inheritance hierarchy. The pointers stored in this class include pointers to all classes provided in the code. Created to allow easy addition of extra functions.

## Difference Templates
Two different templates. One simply takes the functions, and the other takes pointers to two functions.

