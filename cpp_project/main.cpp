#include <iostream>
#include <fstream>
#include <string>
#include "scg_test.pb.h"
#include <google/protobuf/util/json_util.h>

SCG::Test::TestMessage readProtoFromFile(const std::string& filename) {
    SCG::Test::TestMessage message;
    std::ifstream input_file(filename, std::ios::binary);
    if (!input_file) {
        std::cerr << "Error opening file: " << filename << std::endl;
        exit(1);
    }

    if (!message.ParseFromIstream(&input_file)) {
        std::cerr << "Failed to parse Protocol Buffers message." << std::endl;
        exit(1);
    }

    return message;
}

std::string convertMessageToJson(const SCG::Test::TestMessage& message) {
    google::protobuf::util::JsonPrintOptions options;
    options.add_whitespace = true;
    options.always_print_primitive_fields = true;

    std::string json_string;
    google::protobuf::util::MessageToJsonString(message, &json_string, options);

    return json_string;
}

int main() {
    // Replace "scg_test.pb" with the correct path to your input .pb file
    std::string filename = "../protoTest/protomessage/scg_test.pb";

    std::cout << "Attempting to read pb file..." << std::endl;

    SCG::Test::TestMessage message = readProtoFromFile(filename);

    std::string json_string = convertMessageToJson(message);

    std::cout << json_string << std::endl;

    return 0;
}

