#ifndef _MACRO_COMMAND_H_
#define _MACRO_COMMAND_H_

#include <vector>
#include "command.h"

using std::vector;

class MacroCommand : public Command
{
public:
    MacroCommand(Command *pCmds[], int num)
    {
        Command **p2Tmp = pCmds;
        pMCmds = NULL;
        
        pMCmds = new vector<Command *>(num);
        if (NULL == pMCmds)
        {
            cout << "failed to allocate memory for cmd objects" << endl;
            return;
        }
        
        for (vector<Command *>::iterator iter = pMCmds->begin(); 
             iter != pMCmds->end(); ++iter, ++p2Tmp)
        {
            *iter = *p2Tmp;
        }
    
    }
    ~MacroCommand()
    {
    
        if (NULL != pMCmds)
        {
            delete pMCmds;
            pMCmds = NULL;
        }
        
    }
    virtual void Excute()
    {
    
        for (vector<Command *>::iterator iter = pMCmds->begin(); 
             iter != pMCmds->end(); ++iter)
        {
            (*iter)->Excute();
        }
    
    }
    virtual void Undo()
    {
    
        for (vector<Command *>::iterator iter = pMCmds->begin(); 
             iter != pMCmds->end(); ++iter)
        {
            (*iter)->Undo();
        }
    
    }
private:
    vector<Command *> *pMCmds;
};

#endif
/* end of macro_command.h */
