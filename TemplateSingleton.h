#ifndef _TEMPLATESINGLETON_H_
#define _TEMPLATESINGLETON_H_

template <class T>
class Singleton
{
public:
      static T* getInstance()
      {
         if (!m_pInstance)
         {
            m_pInstance = new T();
         }
         return m_pInstance;
      }

      static void releaseInstance()
      {
         if (m_pInstance)
         {
            delete m_pInstance;
            m_pInstance = nullptr;
         }
      }

protected:
      Singleton() {};
      virtual ~Singleton() {};

private:
      Singleton(const Singleton<T>&);
      Singleton& operator=(const Singleton<T>&);

      static T* m_pInstance;

};

template <class T> T* Singleton <T>::m_pInstance = nullptr;

#endif /* _TEMPLATESINGLETON_H_ */
