#ifndef Message_hxx
#define Message_hxx

#include <sipstack/Data.hxx>

namespace Vocal2
{

class Message 
{
   public:
      virtual ~Message(){}
      virtual Data getTransactionId() const=0;
};

}

#endif
