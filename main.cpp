#include <iostream>

#include "shared_ptr.h"
#include "parser.h"
#include "commands_interpreter.h"
#include "cli.h"
#include "data_holder.h"
#include "iDna.h"
#include "iCommand.h"


int main(){

    CommandInterpreter* analyzer = new CommandInterpreter();
    analyzer->run();

    std::cout << "compiled!" << std::endl;
    return 0;
}