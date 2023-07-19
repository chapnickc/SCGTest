using System;
using System.IO;
using System.Text.Json;
using Google.Protobuf;

using SCG.Test;

namespace ProtobufExample
{
    class Program
    {
        static void Main(string[] args)
        {
            // Read the Protocol Buffers data from the .pb file
            
            //string pbFilePath = "protoTest/protomessage/scg_test.pb"; // can use this if you 'include' the file in VisualStudio
            string pbFilePath = "/app/protoTest/protomessage/scg_test.pb";
            TestMessage testMessage;

            using (var input = File.OpenRead(pbFilePath))
            {
                testMessage = TestMessage.Parser.ParseFrom(input);
            }

            // Now, the Protocol Buffers data is deserialized into the testMessage object.

            // Serialize the data to JSON using System.Text.Json
            string jsonString = JsonSerializer.Serialize(testMessage);

            Console.WriteLine(jsonString);
        }
    }
}
