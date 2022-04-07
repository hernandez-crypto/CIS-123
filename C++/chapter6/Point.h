/*
Julio Cesar Hernandez
CIS 123 701 
April 7th 2022

Class "Points" for assignments in week 10 homework

*/

class Point 
{
    // type declaration statements
    private:
        double xCord, yCord; // data members
    public:
        // class methods
        Point(); // default constructor
        Point(double x, double y); // parametized constructor
        // overload operators
        double operator - (const Point& rhs) const;
        bool operator == (const Point& rhs) const;
        // accessor method definitions
        double getX() const
        {
            return xCord;
        };
        double getY() const
        {
            return yCord;
        };
        // mutator methods
        void setX(double newX);
        void setY(double newY);

}
