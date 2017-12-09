# inheritance_hierarchy
An old Bank of America coding test.

## Inheritance Hierarchy
Multiple classes of functions that are called by a main class through virtual functions.

mfunc.h shows how to set up the virtual functions that can call on other class functions.

    // mfunc.h
    class mfunc{
    public:
        mfunc();
        virtual double value(double x);
        virtual ~mfunc(){}
    };

linear.h shows how to set up a function that can interact with the mfunc.h setup.

    // linear.h
    class linear : public mfunc{
    protected:
        double a;
    public:
        linear();
        linear(double A_);
        virtual double value(double x);
        ~linear() {}
    };

main.cpp code showing how the functional classes are used with one another in the inheritance hierarchy.

        // main.cpp
        // initalizes function classes
        linear lin1(a1);
        linear lin2(a2);
        quadratic quad1;
        quadratic2 quad2(a1,a2);

        // outputs check of function classes
        cout << "X = " << x << endl << endl;
        cout << "Functions:" << endl;
        cout << a1 << "*X = " << lin1.value(x) << endl;
        cout << a2 << "*X = " << lin2.value(x) << endl;
        cout << "X*X = " << quad1.value(x) << endl;
        cout << a1 << "*X*X + " << a2*a2 << "*X + "
        << exp(a1/a2) << " = " << quad2.value(x) << endl << endl;

## Sums of Functions
Holds a vector of pointers to objects from the
classes set up in the inheritance hierarchy. The pointers stored in this class include pointers to all classes provided in the code. Created to allow easy addition of extra functions.

sumoffunction.h shows how to set up a class that can pull pointers to other classes.

    // sumoffunction.h
    class sumoffunction : public mfunc{
    protected:
        vector<mfunc*> values_vec;
    public:
        sumoffunction();
        void addfunc(mfunc *newfunc);
        virtual double value(double x);
        ~sumoffunction() {}
    };

## Difference Templates
Two difference calculating templates. One simply takes the functions, and the other takes pointers to two functions classes.

    // pointers
    template <typename T>
    double difference(double X_, T* func1, T* func2)
    {
        double D = (func1 -> value(X_)) - (func2 -> value(X_));
        return D;
    }

    // no pointers
    template <typename T, typename S>
    double difference(double X_, T func1, S func2)
    {
        double D = func1.value(X_) - func2.value(X_);
        return D;
    }
