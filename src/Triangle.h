

class Triangle {
    private:
    // Properties
    double side1;
    double side2;
    double side3;

    double rotationAngle;

    public:
    // Getters
    double getSide1() { return side1; }
    double getSide2() { return side2; }    
    double getSide3() { return side3; }
    double getRotationAngle() { return  rotationAngle; }

    // Setters
    void setSide1(double s1) { side1 = s1; }
    void setSide2(double s2) { side2 = s2; }
    void setSide3(double s3) { side3 = s3; }

    // Constructors
    Triangle(double s1, double s2, double s3) 
    {
        side1 = s1;
        side2 = s2;
        side3 = 
        s3;
    }

    // Instance methods
    double getArea();
    bool largerThan(Triangle t2);
    static double sumAreas(Triangle triangles[], int numTriangles);

};
