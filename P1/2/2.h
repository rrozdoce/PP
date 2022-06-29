//
// Created by XSpat on 6/28/2022.
//

#ifndef P1_2_H
#define P1_2_H

class metros
{
public:
    metros(float x);
    metros();
    bool operator==(const metros) const;
    bool operator!=(const metros) const;
    bool operator<(const metros) const;
    bool operator<=(const metros) const;
    bool operator>(const metros) const;
    bool operator>=(const metros) const;

    operator float();
    metros operator+(metros metro);
    metros operator-(metros metro);
    metros operator--();
    metros operator--(int);
    metros operator++();
    metros operator++(int);

private:
    float x;
};

#endif //P1_2_H
