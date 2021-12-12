//
// Created by Berkay Çelik on 2019-03-05.
//

#ifndef HW1_SELECTIONALGORITHM_H
#define HW1_SELECTIONALGORITHM_H

class SelectionAlgorithm {
public:
    SelectionAlgorithm(int k);
    virtual int select();
protected:
    int k;
};


#endif //HW1_SELECTIONALGORITHM_H
