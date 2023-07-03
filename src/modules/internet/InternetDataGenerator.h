#pragma once

#include <optional>
#include <string>

namespace faker::person
{
class InternetDataGenerator
{
public:
    static std::string username(std::optional<std::string> firstName = std::nullopt,
                                std::optional<std::string> lastName = std::nullopt);

    static std::string email();
};
}
