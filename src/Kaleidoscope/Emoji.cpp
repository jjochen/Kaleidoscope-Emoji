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
namespace {

static void typeEmojiUnicodeForKey(Key key);
static void typeEmojiUnicodeSequence(uint32_t sequence[], size_t size);

} // namespace
} // namespace kaleidoscope


namespace kaleidoscope {

EventHandlerResult Emoji::onKeyswitchEvent(Key &mapped_key, byte row, byte col, uint8_t keyState) {
  if (mapped_key.raw < EMOJI_FIRST || mapped_key.raw > EMOJI_LAST) {
    return EventHandlerResult::OK;
  }

  if (!keyToggledOn(keyState)) {
    return EventHandlerResult::EVENT_CONSUMED;
  }

  typeEmojiUnicodeForKey(mapped_key);

  return EventHandlerResult::EVENT_CONSUMED;
}


namespace {

void typeEmojiUnicodeForKey(Key key) {
  uint32_t *sequence = {};
  size_t size = 0;
  switch (key.raw) {
    case EMOJI_JOYFUL:
      size = 2;
      sequence = new uint32_t[size]{0xd83d, 0xde02};
      break;
    case EMOJI_SMILE:
      size = 2;
      sequence = new uint32_t[size]{0xd83d, 0xde03};
      break;
    case EMOJI_WINK:
      size = 2;
      sequence = new uint32_t[size]{0xd83d, 0xde09};
      break;
    case EMOJI_BLUSH:
      size = 2;
      sequence = new uint32_t[size]{0xd83d, 0xde0a};
      break;
    case EMOJI_CONFIDENT:
      size = 2;
      sequence = new uint32_t[size]{0xd83d, 0xde0e};
      break;
    case EMOJI_FLIRTY:
      size = 2;
      sequence = new uint32_t[size]{0xd83d, 0xde18};
      break;
    case EMOJI_THINKING:
      size = 2;
      sequence = new uint32_t[size]{0xd83e, 0xdd14};
      break;
    case EMOJI_DISBELIEF:
      size = 2;
      sequence = new uint32_t[size]{0xd83d, 0xde44};
      break;
    case EMOJI_MISCHIEVOUS:
      size = 2;
      sequence = new uint32_t[size]{0xd83d, 0xde1c};
      break;
    case EMOJI_UPSIDE_DOWN:
      size = 2;
      sequence = new uint32_t[size]{0xd83d, 0xde43};
      break;
    case EMOJI_ANNOYED:
      size = 2;
      sequence = new uint32_t[size]{0xd83d, 0xde24};
      break;
    case EMOJI_EXPLODING_HEAD:
      size = 2;
      sequence = new uint32_t[size]{0xd83e, 0xdd2f};
      break;
    case EMOJI_GRIMACED:
      size = 2;
      sequence = new uint32_t[size]{0xd83d, 0xde2c};
      break;
    case EMOJI_FLUSHED:
      size = 2;
      sequence = new uint32_t[size]{0xd83d, 0xde33};
      break;
    case EMOJI_CRAZY:
      size = 2;
      sequence = new uint32_t[size]{0xd83e, 0xdd2a};
      break;
    case EMOJI_ILL:
      size = 2;
      sequence = new uint32_t[size]{0xd83d, 0xde37};
      break;
    case EMOJI_VOMITING:
      size = 2;
      sequence = new uint32_t[size]{0xd83e, 0xdd2e};
      break;
    case EMOJI_NERD:
      size = 2;
      sequence = new uint32_t[size]{0xd83e, 0xdd13};
      break;
    case EMOJI_CROSSBONES:
      size = 2;
      sequence = new uint32_t[size]{0x2620, 0xfe0f};
      break;
    case EMOJI_MAN_DANCING:
      size = 2;
      sequence = new uint32_t[size]{0xd83d, 0xdd7a};
      break;
    case EMOJI_VULCAN:
      size = 2;
      sequence = new uint32_t[size]{0xd83d, 0xdd96};
      break;
    case EMOJI_METAL:
      size = 2;
      sequence = new uint32_t[size]{0xd83e, 0xdd18};
      break;
    case EMOJI_THUMBSUP:
      size = 3;
      sequence = new uint32_t[size]{0xd83d, 0xdc4d, 0xfe0f};
      break;
    case EMOJI_THUMBSDOWN:
      size = 3;
      sequence = new uint32_t[size]{0xd83d, 0xdc4e, 0xfe0f};
      break;
    case EMOJI_WAVE:
      size = 2;
      sequence = new uint32_t[size]{0xd83d, 0xdc4b};
      break;
    case EMOJI_EYES:
      size = 2;
      sequence = new uint32_t[size]{0xd83d, 0xdc40};
      break;
    case EMOJI_HEART:
      size = 2;
      sequence = new uint32_t[size]{0x2764, 0xfe0f};
      break;
    case EMOJI_BOOM:
      size = 2;
      sequence = new uint32_t[size]{0xd83d, 0xdca5};
      break;
    case EMOJI_HOLE:
      size = 3;
      sequence = new uint32_t[size]{0xd83d, 0xdd73, 0xfe0f};
      break;
    case EMOJI_UNICORN_FACE:
      size = 2;
      sequence = new uint32_t[size]{0xd83e, 0xdd84};
      break;
    case EMOJI_SNAIL:
      size = 2;
      sequence = new uint32_t[size]{0xd83d, 0xdc0c};
      break;
    case EMOJI_CRICKET:
      size = 2;
      sequence = new uint32_t[size]{0xd83e, 0xdd97};
      break;
    case EMOJI_SUNFLOWER:
      size = 2;
      sequence = new uint32_t[size]{0xd83c, 0xdf3b};
      break;
    case EMOJI_PEACH:
      size = 2;
      sequence = new uint32_t[size]{0xd83c, 0xdf51};
      break;
    case EMOJI_CONSTRUCTION:
      size = 2;
      sequence = new uint32_t[size]{0xd83d, 0xdea7};
      break;
    case EMOJI_ROCKET:
      size = 2;
      sequence = new uint32_t[size]{0xd83d, 0xde80};
      break;
    case EMOJI_HOURGLASS_FLOWING:
      size = 2;
      sequence = new uint32_t[size]{0x23f3, 0xfe0f};
      break;
    case EMOJI_SPARKLES:
      size = 1;
      sequence = new uint32_t[size]{0x2728};
      break;
    case EMOJI_BALLOON:
      size = 2;
      sequence = new uint32_t[size]{0xd83c, 0xdf88};
      break;
    case EMOJI_PARTY:
      size = 2;
      sequence = new uint32_t[size]{0xd83c, 0xdf89};
      break;
    case EMOJI_GIFT:
      size = 2;
      sequence = new uint32_t[size]{0xd83c, 0xdf81};
      break;
    case EMOJI_MOBILE:
      size = 2;
      sequence = new uint32_t[size]{0xd83d, 0xdcf1};
      break;
    case EMOJI_KEYBOARD:
      size = 2;
      sequence = new uint32_t[size]{0x2328, 0xfe0f};
      break;
    case EMOJI_ENVELOPE:
      size = 2;
      sequence = new uint32_t[size]{0x2709, 0xfe0f};
      break;
    case EMOJI_SHOPPING_CART:
      size = 2;
      sequence = new uint32_t[size]{0xd83d, 0xded2};
      break;
    case EMOJI_WARNING:
      size = 2;
      sequence = new uint32_t[size]{0x26a0, 0xfe0f};
      break;
    case EMOJI_WHITE_CHECK_MARK:
      size = 1;
      sequence = new uint32_t[size]{0x2705};
      break;
    case EMOJI_CROSS_MARK:
      size = 1;
      sequence = new uint32_t[size]{0x274c};
      break;
  }
  typeEmojiUnicodeSequence(sequence, size);
}

void typeEmojiUnicodeSequence(uint32_t *sequence, size_t size) {
  emojiTypingWillStart();
  ::Unicode.start();

  for (uint8_t i = 0; i < size; i++) {
    ::Unicode.typeCode(sequence[i]);
  }

  ::Unicode.end();
  emojiTypingDidFinish();
}

} // namespace
} // namespace kaleidoscope

__attribute__((weak)) void emojiTypingWillStart() {
}
__attribute__((weak)) void emojiTypingDidFinish() {
}

kaleidoscope::Emoji Emoji;
