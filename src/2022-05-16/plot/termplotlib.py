#!/usr/bin/env python
# -*- coding: utf-8 -*-

import termplotlib as tpl
import numpy as np

x = np.linspace(-1.1, 1.1, 1000)
y = np.arccos(x)

fig = tpl.figure()
fig.plot(x, y, label="data", width=100, height=30)
fig.show()
