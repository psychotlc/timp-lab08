#include <SFML/Network.hpp>
#include <iostream>


int main()
{
    sf::TcpListener listener;

    if (listener.listen(1234) != sf::Socket::Done)
    {
        std::cout << "Ошибка при привязке порта!" << std::endl;
        return 1;
    }
    while (true){
        

        sf::TcpSocket client;
        if (listener.accept(client) != sf::Socket::Done)
        {
            
            std::cout << "Ошибка при подключении клиента!" << std::endl;
            return 1;
        }


        std::string message = "Hello, world!";

        if (client.send(message.c_str(), message.size()) != sf::Socket::Done)
        {
            std::cout << "Ошибка при отправке сообщения!" << std::endl;
            return 1;
        }

        client.disconnect();
    }
    return 0;
}
