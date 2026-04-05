#include <iostream>

class Log{
public:
    enum level
    {
        error,
        warning,
        info
    };  
    const int LogLevelError = error;
    const int LogLevelWarning = warning;
    const int LogLevelInfo = info;

private:
    int m_LogLevel;
public:
    void setlevel(int level){
        m_LogLevel = level;
    }
    void Error(const char* message){
        if(m_LogLevel >= LogLevelError) std::cout <<"[Error] "<< message << std::endl;
    }
    void Warn(const char* message){
        if(m_LogLevel >= LogLevelWarning)std::cout <<"[Warning] "<< message << std::endl;
    }
    void Info(const char* message){
        if(m_LogLevel >= LogLevelInfo)std::cout <<"[Info] "<< message << std::endl;
    }
};

int main(){
    Log log;
    log.setlevel(log.LogLevelError);
    log.Warn("Hello");
    log.Error("What");
    log.Info("Wait");
    // std::cin.get();

}