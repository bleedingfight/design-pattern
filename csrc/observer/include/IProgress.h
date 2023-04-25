//
// Created by liushuai on 2020/12/7.
//

#ifndef OBSERVER_IPROGRESS_H
#define OBSERVER_IPROGRESS_H


class IProgress {
public:
    virtual void DoProgress(float value) = 0;
    virtual ~IProgress();
};


#endif //OBSERVER_IPROGRESS_H
