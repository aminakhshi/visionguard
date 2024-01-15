# VisionGuard: AI-Powered Collision Avoidance System for the Visually Impaired

## Introduction

Vision impairment significantly impacts the global economy, with an estimated annual productivity loss cost of US $411 billion. Of the world's 8 billion people, approximately 2.2 billion have some form of vision impairment, including 4.3 million who are blind. In Canada, over 2 million individuals live with vision impairment, a number expected to double in the next 25 years due to aging and other factors, potentially leading to healthcare costs exceeding $30 billion annually. Navigational challenges faced by individuals with vision impairments increase their risk of accidents. It's vital to prioritize collision prevention for these individuals for safety, independence, confidence, and efficiency.

## Goal and Usage

**VisionGuard** is an innovative AI-powered kit designed to assist visually impaired individuals in avoiding collisions. It can be connected to a walking stick and alerts the user of obstacles in their path. VisionGuard also pairs with smartphones, providing audio instructions through a specially designed app, informing users about their surroundings.

## How It Works

1. **Imager Sensor Module**: Captures real-time environmental data.
2. **Arduino Kit Processing**: Data is processed using the cutting-edge yolov8 model for obstacle detection.
3. **Ultrasonic Sensor Module**: Measures the distance to obstacles by sending an input pulse and timing the received signal.
4. **Alert Mechanism**: If an object is within 0 to 0.5 meters, the device activates a buzzer or haptic engine to warn the user.
5. **Software**: Implemented in C++ and TensorFlow Lite on an Arduino Uno board.

## Prototype App

The prototype app is designed to interface seamlessly with VisionGuard, providing intuitive audio instructions for the user.

![Prototype App Screenshot](link-to-app-screenshot)

