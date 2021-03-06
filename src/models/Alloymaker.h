#ifndef ALLOYMAKER_H_
#define ALLOYMAKER_H_

#include <string>
#include "Composition.h"

class Alloymaker
{

public:
    Alloymaker();
    void setCompositions(Composition &);
    Composition &getCompositions();
    double getUnitWeight();
    void setUnitWeight(double);
    double getWeight();
    void setWeight(double);
    size_t getCount();
    void setCount(size_t);
    void setIsQuantified(bool);
    bool getIsQuantified();
    double getLossPercentage();
    void setLossPercentage(double);
    double getLowerBound();
    void setLowerBound(double);
    double getUpperBound();
    void setUpperBound(double);
    size_t getPrice();
    void setPrice(size_t);
    std::string getName();
    void setName(std::string);

private:
    Composition *compositions;
    std::string name;
    double lossPercentage;
    double lowerBound;
    double upperBound;
    double unitWeight;
    double weight;
    size_t count;
    bool isQuantified;
    size_t price;
};

#endif /* ALLOYMAKER_H_ */
