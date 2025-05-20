# LiMQ

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)
[![Build Status](https://img.shields.io/github/workflow/status/lightmq/lightmq/CI)](https://github.com/lightmq/lightmq/actions)
[![GitHub release](https://img.shields.io/github/v/release/lightmq/lightmq)](https://github.com/lightmq/lightmq/releases)

**LiMQ** is a fast, lightweight message broker designed for high-performance applications where efficiency and low overhead are critical.

## Features

- **Blazing Fast**: Optimized for high-throughput and low-latency messaging
- **Lightweight**: Minimal memory footprint, perfect for resource-constrained environments
- **Flexible Topology**: Support for pub/sub, queue, and request/reply patterns
- **Cross-Platform**: Works on Linux, macOS, and Windows
- **Zero Dependencies**: Self-contained with no external library requirements
- **Thread-Safe**: Designed for concurrent access from multiple producers and consumers
- **Persistent Storage**: Optional disk persistence for message durability
- **Simple API**: Clean, intuitive interface for rapid integration

## Getting Started

### Prerequisites

- C++17 compatible compiler
- CMake 3.15+

### Building from Source

```bash
# Clone the repository
git clone https://github.com/lightmq/lightmq.git
cd limq

# Create build directory
mkdir build && cd build

# Configure and build
cmake ..
cmake --build .

# Run tests
ctest
```

### Basic Usage

```cpp
#include <limq/limq.hpp>

int main() {
    // Create a broker instance
    limq::Broker broker;
    
    // Start the broker on a specific port
    broker.start(5555);
    
    // Create a publisher
    limq::Publisher publisher("tcp://localhost:5555");
    
    // Publish a message
    publisher.publish("topic", "Hello, World!");
    
    return 0;
}
```

## Documentation

For comprehensive documentation, see the [LimQ Documentation](https://lightmq.io/docs).

### Examples

Check the `examples/` directory for complete working examples:

- Basic publisher/subscriber
- Load-balanced queue system
- Request/reply pattern
- Persistence configuration
- Performance benchmarks

## Benchmarks

| Scenario | Messages/sec | Latency (μs) |
|----------|--------------|--------------|
| 1:1 Direct | 1,500,000 | 12 |
| 1:N Fanout | 1,200,000 | 18 |
| N:1 Funnel | 850,000 | 25 |
| Request/Reply | 350,000 | 42 |

*Measured on an Intel i7-10700K @ 3.8GHz, single thread per process*

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add some amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

Please make sure to update tests as appropriate.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Inspired by ZeroMQ and RabbitMQ
- Built with modern C++ principles
- Designed for real-world high-performance applications