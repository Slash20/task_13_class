#include <iostream>

class Rectangle {
public:

    int AreaRectangle(int m_a, int m_b) {
        int s;
        s = m_a * m_b;
        return s;
    }

    int PerimeterRectangle(int m_a, int m_b) {
        int p;
        p = 2*(m_a + m_b);
        return p;
    }

    int DiagonalLengthRectangle(int m_a, int m_b) {
        int c;
        c = sqrt(m_a * m_a + m_b * m_b);
        return c;
    }


};


int main() {

    Rectangle r1;

    std::cout << r1.DiagonalLengthRectangle(45, 6) << std::endl;
    std::cout << r1.PerimeterRectangle(56, 9) << std::endl;
    std::cout << r1.AreaRectangle(12, 7) << std::endl;

    return 0;
}
