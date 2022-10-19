/*
  Following The Cherno's C++ series. This the beginning of a Log class that will be improved over the video series.
  Creating a Log class to manage our log messages -
  information that we want to print to the console for debugging etc.

  Write error to console according to the log level.

  Notes:
    main.cpp:13:29: warning: default member initializer for non-static data member is a C++11 extension [-Wc++11-extensions]
      const int LogLevelError = 0;
                              ^
    Resolved this by adding the static keyword before const. I'm not sure yet why this works so making a note of it.
*/
#include <iostream>

class Log
{
  public:
  // Class variables. Our log levels codes.
    static const int LogLevelError = 0;
    static const int LogLevelWarning = 1;
    static const int LogLevelInfo = 2;

  private:
  // Class variables
    int m_LogLevel; // A private member variable. Note the m_ convention that indicates a private class member variable.

  public:
  // methods
    void SetLevel(int level) // Void because we are doing some action not returning a value.
    {
      m_LogLevel = level;
    }

    // Message methods
    void Error(const char* message)
    {
      if (m_LogLevel >= LogLevelError) // Note that the {} are implicit here so no need to declare.
        std::cout << "[ERROR]: " << message << std::endl;
    }

    void Warn(const char* message)
    {
      if (m_LogLevel >= LogLevelWarning)
        std::cout << "[WARNING]: " << message << std::endl;
    }

     void Info(const char* message)
    {
      if (m_LogLevel >= LogLevelInfo)
        std::cout << "[INFO]: " << message << std::endl;
    }
};

int main(){
  Log log;
  log.SetLevel(log.LogLevelError);
  log.Error("Hello");
  log.Warn("Hello");
  log.Info("Hello");
  std::cin.get();
}
