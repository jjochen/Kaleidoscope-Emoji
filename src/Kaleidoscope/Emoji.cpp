/* -*- mode: c++ -*-
 * Kaleidoscope-Emoji -- Emoji Keys.
 *
 * Copyright (c) 2018 Jochen Pfeiffer
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
.* in the Software without restriction, including without limitation the rights
.* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
.* copies of the Software, and to permit persons to whom the Software is
.* furnished to do so, subject to the following conditions:
.*
.* The above copyright notice and this permission notice shall be included in all
.* copies or substantial portions of the Software.
.*
.* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
.* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
.* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
.* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
.* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
.* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
.* SOFTWARE.
 */

#include <Kaleidoscope-Emoji.h>
#include <Kaleidoscope-Unicode.h>


namespace kaleidoscope {

Emoji::Emoji(void) {

}

void Emoji::begin(void) {
  Kaleidoscope.useEventHandlerHook(eventHandlerHook);
}

Key Emoji::eventHandlerHook(Key mapped_key, byte row, byte col, uint8_t key_state) {
  if (mapped_key.raw < EMOJI_FIRST || mapped_key.raw > EMOJI_LAST) {
    return mapped_key;
  }

  if (!keyToggledOn(key_state)) {
    return Key_NoKey;
  }
  uint32_t character = 0;
  uint32_t variation = 0;

  switch (mapped_key.raw) {
  case EMOJI_ALERT:
    character = 0x26A0;
    variation = 0xFE0F;
    break;

  case EMOJI_BOOM:
    character = 0x1F4A5;
    break;

  case EMOJI_CHECK:
    character = 0x2705;
    break;

  case EMOJI_CRAZY:
    character = 0x1F92A;
    break;

  case EMOJI_EYES:
    character = 0x1F633;
    break;

  case EMOJI_FLOWER:
    character = 0x1F33B;
    break;

  case EMOJI_GRIMACE:
    character = 0x1F62C;
    break;

  case EMOJI_JOY:
    character = 0x1F602;
    break;

  case EMOJI_KISS:
    character = 0x1F618;
    break;

  case EMOJI_MAD:
    character = 0x1F624;
    break;

  case EMOJI_PARTY:
    character = 0x1F389;
    break;

  case EMOJI_PEACH:
    character = 0x1F351;
    break;

  case EMOJI_PRESENT:
    character = 0x1F381;
    break;

  case EMOJI_ROCKET:
    character = 0x1F680;
    break;

  case EMOJI_SMILE:
    character = 0x1F60A;
    break;

  case EMOJI_SUNGLASSES:
    character = 0x1F60E;
    break;

  case EMOJI_THINKING:
    character = 0x1F914;
    break;

  case EMOJI_THUMBSDOWN:
    character = 0x1F44E;
    break;

  case EMOJI_THUMBSUP:
    character = 0x1F44D;
    break;

  case EMOJI_TONGUE:
    character = 0x1F61C;
    break;

  case EMOJI_UNICORN:
    character = 0x1F984;
    break;

  case EMOJI_VOMIT:
    character = 0x1F92E;
    break;

  case EMOJI_WAVE:
    character = 0x1F44B;
    break;
  }

  typeEmoji(character, variation);
  return Key_NoKey;
}

static void typeEmoji(uint32_t character, uint32_t variation) {
  Unicode.start();
  Unicode.typeCode(character);
  if (variation > 0) {
    Unicode.typeCode(variation);
  }
  Unicode.end();
}

}

kaleidoscope::Emoji Emoji;
