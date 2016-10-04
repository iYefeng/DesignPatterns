/************************************************************
 * Use of this source code is governed by a BSD-style license
 * that can be found in the License file.
 * 
 * Author        : yefeng
 * Email         : yefeng38083120@126.com
 * Create time   : 2016-10-04 12:54
 * Last modified : 2016-10-04 12:56
 * Filename      : Director.h
 * Description   : 
 * *********************************************************/

#ifndef DIRECTOR_H_
# define DIRECTOR_H_

#include "Builder.h"
#include "Product.h"

class Director
{
public:
  Car& getBenzA() {
    sequence_.clear();
    sequence_.push_back("start");
    sequence_.push_back("stop");
    benzBuiler_.setSequence(sequence_);
    return benzBuiler_.getCar();
  }

  Car& getBenzB() {
    sequence_.clear();
    sequence_.push_back("start");
    sequence_.push_back("engineBoom");
    sequence_.push_back("stop");
    benzBuiler_.setSequence(sequence_);
    return benzBuiler_.getCar();
  }

  Car& getBMWA() {
    sequence_.clear();
    sequence_.push_back("start");
    sequence_.push_back("stop");
    sequence_.push_back("alarm");
    bmwBuilder_.setSequence(sequence_);
    return bmwBuilder_.getCar();
  }

  Car& getBMWB() {
    sequence_.clear();
    sequence_.push_back("start");
    sequence_.push_back("alarm");
    sequence_.push_back("engineBoom");
    sequence_.push_back("stop");
    bmwBuilder_.setSequence(sequence_);
    return bmwBuilder_.getCar();
  }


private:
  vector<string> sequence_;
  BenzBuilder benzBuiler_;
  BMWBuilder bmwBuilder_;
};



#endif // DIRECTOR_H_
