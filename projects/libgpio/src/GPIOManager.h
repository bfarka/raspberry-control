/*
 * GPIOManager.h
 *
 *  Created on: Jan 31, 2016
 *      Author: fab
 */

#ifndef GPIOMANAGER_H_
#define GPIOMANAGER_H_

namespace GPIO {

class GPIOManager {
public:
        static GPIOManager& getInstance()
        {
            static GPIOManager    instance; // Guaranteed to be destroyed.
                                  // Instantiated on first use.
            return instance;
        }
    private:
        GPIOManager();


        // C++ 11
        // =======
        // We can use the better technique of deleting the methods
        // we don't want.
    public:
        void doSomething();
        GPIOManager(GPIOManager const&)		= delete;
        void operator=(GPIOManager const&)  = delete;

        // Note: Scott Meyers mentions in his Effective Modern
        //       C++ book, that deleted functions should generally
        //       be public as it results in better error messages
        //       due to the compilers behavior to check accessibility
        //       before deleted status
};
} /* namespace GPIO */

#endif /* GPIOMANAGER_H_ */
