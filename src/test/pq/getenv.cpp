// The Art of C++ / Utility
// Copyright (c) 2016-2018 Daniel Frey

#include "../getenv.hpp"
#include "../macros.hpp"

void run()
{
#ifdef WIN32
   TEST_ASSERT( !tao::pq::internal::getenv( "WINDIR" ).empty() );
#else
   TEST_ASSERT( !tao::pq::internal::getenv( "USER" ).empty() );
#endif
   TEST_THROWS( tao::pq::internal::getenv( "TAOPQ_DOESNOTEXIST" ) );

#ifdef WIN32
   TEST_ASSERT( !tao::pq::internal::getenv( "WINDIR", "" ).empty() );
#else
   TEST_ASSERT( !tao::pq::internal::getenv( "USER", "" ).empty() );
#endif
   TEST_ASSERT( tao::pq::internal::getenv( "TAOPQ_DOESNOTEXIST", "" ).empty() );
   TEST_ASSERT( tao::pq::internal::getenv( "TAOPQ_DOESNOTEXIST", "DEFAULT VALUE" ) == "DEFAULT VALUE" );
}

int main()
{
   try {
      run();
   }
   catch( const std::exception& e ) {
      std::cerr << "exception: " << e.what() << std::endl;
      throw;
   }
   catch( ... ) {
      std::cerr << "unknown exception" << std::endl;
      throw;
   }
}
