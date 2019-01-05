
#include "show_list.h"

ShowListCommand::~ShowListCommand()
{
    std::cout << "im in showList dtor" << std::endl;
}

void ShowListCommand::run(int argc, char ** argv, DataController & m_DataController)
{
    m_DataController.showList();
}