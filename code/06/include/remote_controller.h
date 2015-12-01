#ifndef _REMOTE_CONTROLLER_H_
#define _REMOTE_CONTROLLER_H_

#include <iostream>
#include <vector>
#include "command.h"

using std::vector;
using std::cout;
using std::endl;

#define MAX_SLOT 7

class RemoteController
{
public:
    RemoteController()
    {
        pOnCmds = NULL;
        pOffCmds = NULL;
        pOnCmds = new vector<Command *>(MAX_SLOT);
        if (NULL == pOnCmds)
        {
            cout << "failed to new on cmd object" << endl;
            return;
        }

        pOffCmds = new vector<Command *>(MAX_SLOT);
        if (NULL == pOffCmds)
        {
            cout << "failed to new off cmd object" << endl;
            delete pOnCmds;
            return;
        }
        
        for (vector<Command *>::iterator iter = pOnCmds->begin(); 
             iter != pOnCmds->end(); ++iter)
        {
            *iter = NULL;
        }
        for (vector<Command *>::iterator iter = pOffCmds->begin(); 
             iter != pOffCmds->end(); ++iter)
        {
            *iter = NULL;
        }
    }
    ~RemoteController()
    {
        if (NULL != pOnCmds)
        {
            delete pOnCmds;
            pOnCmds = NULL;
        }

        if (NULL != pOffCmds)
        {
            delete pOffCmds;
            pOffCmds = NULL;
        }
        
    }

    void SetCommand(int slot, Command *pOn, Command *pOff)
    {
        if (slot < 0 || slot >= MAX_SLOT)
        {
            cout << "invalid slot " << slot << endl;
            return;
        }
        (*pOnCmds)[slot] = pOn;
        (*pOffCmds)[slot] = pOff;
    }

    void OnButtonWasPushed(int slot)
    {
        if (slot < 0 || slot >= MAX_SLOT)
        {
            cout << "invalid slot " << slot << endl;
            return;
        }

        if (NULL == (*pOnCmds)[slot])
        {
            cout << "no command binding with slot " << slot << endl;
            return;
        }

        (*pOnCmds)[slot]->Excute();
    }

    void OffButtonWasPushed(int slot)
    {
        if (slot < 0 || slot >= MAX_SLOT)
        {
            cout << "invalid slot " << slot << endl;
            return;
        }

        if (NULL == (*pOffCmds)[slot])
        {
            cout << "no command binding with slot " << slot << endl;
            return;
        }

        (*pOffCmds)[slot]->Excute();
    }
private:
    vector<Command *> *pOnCmds;
    vector<Command *> *pOffCmds;
};

#endif
/* end of remote_controller.h */
