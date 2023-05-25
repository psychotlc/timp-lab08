#include <SFML/Network.hpp>
#include <iostream>

int main()
{
    sf::TcpSocket socket;

    if (socket.connect("localhost", 1234) != 0)
    {
        std::cout << "Ошибка при подключении к серверу!" << std::endl;
        return 1;
    }

    
    char buffer[1024];
    std::size_t received;
    if (socket.receive(buffer, sizeof(buffer), received) != sf::Socket::Done)
    {
        std::cout << "Ошибка при получении данных от сервера!" << std::endl;
        return 1;
    }

    std::cout << "Получено от сервера: " << buffer << std::endl;

    socket.disconnect();

    return 0;
}
