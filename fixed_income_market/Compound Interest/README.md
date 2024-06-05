## Compound Interest
You can use simple interest rates to analyze single period cash flows. However, most financial operations,
such as loans, have multiple periods. For this purpose, you need to consider compound interest.

### Problem
Calculate the compound interest accumulated by a given principal value after the passage of N time periods

### Solution
The solution uses a new C++ class that encapsulates the concept of compound interest. With this class,
it is becomes easy to answer the proposed question using two member functions. The first function,
multiplePeriod, returns the future value of a fixed income investment after a given number of periods, as
passed in the function parameter.
As mentioned previously, interest can be calculated either as a discrete or a continuous compounding
process. For discrete compounding, we assume that interest is paid only at regular intervals, as defined by
the investment vehicle. The compounding happens as interest is added to the original principal.
The formula for discrete compounded interest rate is: <br>

V = P * (1 + R)^N

Where P is the present value, V is the future value, R is the interest rate, and N is the number of periods.
The interest rate is the value passed as a parameter to the class constructor and stored as a member variable.
The number of periods N is passed as the second parameter to the multiplePeriod method.
For continuous compounding calculation, you need to use a separate method, continuousCompounding.
In this case, we assume that compounding doesn’t happen in discrete steps, but that the payments are made
continuously over time. This is a possible way to determine the future value of a financial application (or at
least an upper bound for the desired future value).
The formula for the calculation of continuous interest rate compounding is: <br>

V = P * e^(R * N)

Here, V is the desired future value, P is the present value, R is the interest rate during the period, and N
is the number of periods. For example, to find the future value of continuously compounded interest after
two years at 8% interest per year, you should use the value of the previous equation with parameters R = 0.08
and N = 2.
