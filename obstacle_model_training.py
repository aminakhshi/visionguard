#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sun Jan 8 10:47:42 2024

@author: amin
"""
import os
from ultralytics import YOLO
from ultralytics import settings
settings.update({'datasets_dir': '~/projects/ai/visionguard/dataset/'})


# Load a model
model = YOLO('yolo_model/yolov8n.pt')  # load a pretrained model

# Train the model
results = model.train(data='visionguard_data.yaml', epochs=100, imgsz=160)

