#include <phosphor-logging/log.hpp>
#include <sdbusplus/asio/connection.hpp>

#include <memory>

int main()
{
    boost::asio::io_context ioc;

    auto bus = std::make_shared<sdbusplus::asio::connection>(ioc);

    constexpr const char* serviceName = "xyz.openbmc_project.NodeInfo";
    bus->request_name(serviceName);

    phosphor::logging::log<phosphor::logging::level::INFO>(
        "NodeInfo get starting");
    ioc.run();

    return 0;
}