# VisionGuard: AI-Powered Collision Avoidance System for the Visually Impaired

## Introduction

Vision impairment significantly impacts the global economy, with an estimated annual productivity loss cost of US $411 billion. Of the world's 8 billion people, approximately 2.2 billion have some form of vision impairment, including 4.3 million who are blind. In Canada, over 2 million individuals live with vision impairment, a number expected to double in the next 25 years due to aging and other factors, potentially leading to healthcare costs exceeding $30 billion annually. Navigational challenges faced by individuals with vision impairments increase their risk of accidents. It's vital to prioritize collision prevention for these individuals for safety, independence, confidence, and efficiency.

## Goal and Usage

**VisionGuard** is an innovative AI-powered kit designed to assist visually impaired individuals in avoiding collisions. It can be connected to a walking stick and alerts the user of obstacles in their path. VisionGuard also pairs with smartphones, providing audio instructions through a specially designed app, informing users about their surroundings.

## Learn More

For a more detailed overview and demonstration of VisionGuard, check out our video on YouTube:[YouTube Video Link](https://youtu.be/5Dpk4dlQ5Rc)

[![VisionGuard YouTube Video](https://img.youtube.com/vi/5Dpk4dlQ5Rc/0.jpg)](https://youtu.be/5Dpk4dlQ5Rc)

## How It Works

1. **Imager Sensor Module**: Captures real-time environmental data.
2. **Arduino Kit Processing**: Data is processed using the cutting-edge yolov8 model for obstacle detection.
3. **Ultrasonic Sensor Module**: Measures the distance to obstacles by sending an input pulse and timing the received signal.
4. **Alert Mechanism**: If an object is within 0 to 0.5 meters, the device activates a buzzer or haptic engine to warn the user.
5. **Software**: Implemented in C++ and TensorFlow Lite on an Arduino Uno board.

## VisionGuard Kit Image

![VisionGuard Kit](dummy-link-to-kit-image.jpg)

## Model Performance

This section demonstrates the effectiveness of our yolov8 model in detecting obstacles using a sample image.

![Model Performance Sample](dummy-link-to-model-performance-image.jpg)

## Prototype App

The prototype app is designed to interface seamlessly with VisionGuard, providing intuitive audio instructions for the user.

[![Prototype App Screenshot](dummy-link-to-app-prototype-image.jpg)](https://www.figma.com/proto/rpRvNo1BV3Ocuzlqvte41x/VisionGuard?type=design&node-id=28-104&t=4Z5TPHpWhHfBHAi6-1&scaling=scale-down&page-id=0%3A1&starting-point-node-id=28%3A104&show-proto-sidebar=1&mode=design)

## To-Do

#### Kit Development

- [ ] Design initial schematics for the VisionGuard kit.
- [ ] Select and acquire necessary components (sensors, Arduino board, etc.).
- [ ] Assemble the prototype of the VisionGuard kit.
- [ ] Test the basic functionality of the kit.
- [ ] Iterate the design based on initial testing.

#### Data Collection and Model Improvement

- [ ] Define criteria for data collection (types of obstacles, environments, etc.).
- [ ] Collect diverse datasets to train the yolov8 model.
- [ ] Train the yolov8 model with initial datasets.
- [ ] Validate the model performance with test data.
- [ ] Refine and retrain the model based on test results.
- [ ] Optimize the model for efficient real-time processing.

#### Integration with Buzzer/Haptic Engine

- [ ] Design and develop the interface for buzzer/haptic feedback.
- [ ] Integrate the buzzer/haptic engine with the VisionGuard kit.
- [ ] Program the logic for distance-based alert activation.
- [ ] Test the functionality of alerts in various scenarios.
- [ ] Fine-tune the sensitivity and responsiveness of the alerts.

#### Mobile App Development

- [ ] Draft initial design and layout for the mobile app.
- [ ] Develop the app prototype with basic functionalities.
- [ ] Implement connectivity features with the VisionGuard kit.
- [ ] Create audio instruction features for obstacle notification.
- [ ] Test the app with the VisionGuard kit for functionality.
- [ ] Refine and optimize the app based on user feedback.

#### Final Integration and Testing

- [ ] Integrate all components (kit, app, buzzer/haptic engine).
- [ ] Conduct comprehensive testing with potential end-users.
- [ ] Gather feedback and make necessary adjustments.
- [ ] Prepare documentation and user manuals.
- [ ] Plan for a pilot launch to gather real-world usage data.


## Contribute

This app is designed under open-source license agreement. Feel free to fork the project, open an issue, or submit a pull request to suggest any features you'd love to see in future iterations!


## License

MIT License
