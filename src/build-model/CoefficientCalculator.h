#ifndef COEFFICIENT_H_
#define COEFFICIENT_H_

#include "model/Alloymaker.h"
#include "model/Standard.h"

class CoefficientCalculator {
public:
    CoefficientCalculator(Alloymaker &);

    void setAlloymaker(Alloymaker &);

    double composition();

    double compositionVarAmount(double);

    double amount();

    double capacity();

private:
    Alloymaker *alloymaker;
};

#endif /* COEFFICIENT_H_ */
