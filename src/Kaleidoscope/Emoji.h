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

#pragma once

#include <Kaleidoscope.h>
#include <Kaleidoscope-Ranges.h>

#define EMOJI_KEY(n) (Key){ .raw = kaleidoscope::EMOJI_ ## n }
#define Key_EmojiJoyful EMOJI_KEY(JOYFUL) // 😂 (0x1F602) face with tears of joy
#define Key_EmojiSmile EMOJI_KEY(SMILE) // 😃 (0x1F603) grinning face with big eyes
#define Key_EmojiWink EMOJI_KEY(WINK) // 😉 (0x1F609) winking face
#define Key_EmojiBlush EMOJI_KEY(BLUSH) // 😊 (0x1F60A) smiling face with smiling eyes
#define Key_EmojiConfident EMOJI_KEY(CONFIDENT) // 😎 (0x1F60E) smiling face with sunglasses
#define Key_EmojiFlirty EMOJI_KEY(FLIRTY) // 😘 (0x1F618) face blowing a kiss
#define Key_EmojiThinking EMOJI_KEY(THINKING) // 🤔 (0x1F914) thinking face
#define Key_EmojiDisbelief EMOJI_KEY(DISBELIEF) // 🙄 (0x1F644) face with rolling eyes
#define Key_EmojiMischievous EMOJI_KEY(MISCHIEVOUS) // 😜 (0x1F61C) winking face with tongue
#define Key_EmojiUpsideDown EMOJI_KEY(UPSIDE_DOWN) // 🙃 (0x1F643) upside-down face
#define Key_EmojiAnnoyed EMOJI_KEY(ANNOYED) // 😤 (0x1F624) face with steam from nose
#define Key_EmojiExplodingHead EMOJI_KEY(EXPLODING_HEAD) // 🤯 (0x1F92F) exploding head
#define Key_EmojiGrimaced EMOJI_KEY(GRIMACED) // 😬 (0x1F62C) grimacing face
#define Key_EmojiFlushed EMOJI_KEY(FLUSHED) // 😳 (0x1F633) flushed face
#define Key_EmojiCrazy EMOJI_KEY(CRAZY) // 🤪 (0x1F92A) zany face
#define Key_EmojiIll EMOJI_KEY(ILL) // 😷 (0x1F637) face with medical mask
#define Key_EmojiVomiting EMOJI_KEY(VOMITING) // 🤮 (0x1F92E) face vomiting
#define Key_EmojiNerd EMOJI_KEY(NERD) // 🤓 (0x1F913) nerd face
#define Key_EmojiCrossbones EMOJI_KEY(CROSSBONES) // ☠️ (0x2620) skull and crossbones
#define Key_EmojiManDancing EMOJI_KEY(MAN_DANCING) // 🕺 (0x1F57A) man dancing
#define Key_EmojiVulcan EMOJI_KEY(VULCAN) // 🖖 (0x1F596) vulcan salute
#define Key_EmojiMetal EMOJI_KEY(METAL) // 🤘 (0x1F918) sign of the horns
#define Key_EmojiThumbsup EMOJI_KEY(THUMBSUP) // 👍️ (0x1F44D) thumbs up
#define Key_EmojiThumbsdown EMOJI_KEY(THUMBSDOWN) // 👎️ (0x1F44E) thumbs down
#define Key_EmojiWave EMOJI_KEY(WAVE) // 👋 (0x1F44B) waving hand
#define Key_EmojiEyes EMOJI_KEY(EYES) // 👀 (0x1F440) eyes
#define Key_EmojiHeart EMOJI_KEY(HEART) // ❤️ (0x2764) red heart
#define Key_EmojiBoom EMOJI_KEY(BOOM) // 💥 (0x1F4A5) collision
#define Key_EmojiHole EMOJI_KEY(HOLE) // 🕳️ (0x1F573) hole
#define Key_EmojiUnicornFace EMOJI_KEY(UNICORN_FACE) // 🦄 (0x1F984) unicorn face
#define Key_EmojiSnail EMOJI_KEY(SNAIL) // 🐌 (0x1F40C) snail
#define Key_EmojiCricket EMOJI_KEY(CRICKET) // 🦗 (0x1F997) cricket
#define Key_EmojiSunflower EMOJI_KEY(SUNFLOWER) // 🌻 (0x1F33B) sunflower
#define Key_EmojiPeach EMOJI_KEY(PEACH) // 🍑 (0x1F351) peach
#define Key_EmojiConstruction EMOJI_KEY(CONSTRUCTION) // 🚧 (0x1F6A7) construction
#define Key_EmojiRocket EMOJI_KEY(ROCKET) // 🚀 (0x1F680) rocket
#define Key_EmojiHourglassFlowing EMOJI_KEY(HOURGLASS_FLOWING) // ⏳️ (0x23F3) hourglass not done
#define Key_EmojiSparkles EMOJI_KEY(SPARKLES) // ✨ (0x2728) sparkles
#define Key_EmojiBalloon EMOJI_KEY(BALLOON) // 🎈 (0x1F388) balloon
#define Key_EmojiParty EMOJI_KEY(PARTY) // 🎉 (0x1F389) party popper
#define Key_EmojiGift EMOJI_KEY(GIFT) // 🎁 (0x1F381) wrapped gift
#define Key_EmojiMobile EMOJI_KEY(MOBILE) // 📱 (0x1F4F1) mobile phone
#define Key_EmojiKeyboard EMOJI_KEY(KEYBOARD) // ⌨️ (0x2328) keyboard
#define Key_EmojiEnvelope EMOJI_KEY(ENVELOPE) // ✉️ (0x2709) envelope
#define Key_EmojiShoppingCart EMOJI_KEY(SHOPPING_CART) // 🛒 (0x1F6D2) shopping cart
#define Key_EmojiWarning EMOJI_KEY(WARNING) // ⚠️ (0x26A0) warning
#define Key_EmojiWhiteCheckMark EMOJI_KEY(WHITE_CHECK_MARK) // ✅ (0x2705) white heavy check mark
#define Key_EmojiCrossMark EMOJI_KEY(CROSS_MARK) // ❌ (0x274C) cross mark


namespace kaleidoscope {

enum {
  EMOJI_FIRST = kaleidoscope::ranges::EMOJI_FIRST,
  EMOJI_JOYFUL = EMOJI_FIRST,
  EMOJI_SMILE,
  EMOJI_WINK,
  EMOJI_BLUSH,
  EMOJI_CONFIDENT,
  EMOJI_FLIRTY,
  EMOJI_THINKING,
  EMOJI_DISBELIEF,
  EMOJI_MISCHIEVOUS,
  EMOJI_UPSIDE_DOWN,
  EMOJI_ANNOYED,
  EMOJI_EXPLODING_HEAD,
  EMOJI_GRIMACED,
  EMOJI_FLUSHED,
  EMOJI_CRAZY,
  EMOJI_ILL,
  EMOJI_VOMITING,
  EMOJI_NERD,
  EMOJI_CROSSBONES,
  EMOJI_MAN_DANCING,
  EMOJI_VULCAN,
  EMOJI_METAL,
  EMOJI_THUMBSUP,
  EMOJI_THUMBSDOWN,
  EMOJI_WAVE,
  EMOJI_EYES,
  EMOJI_HEART,
  EMOJI_BOOM,
  EMOJI_HOLE,
  EMOJI_UNICORN_FACE,
  EMOJI_SNAIL,
  EMOJI_CRICKET,
  EMOJI_SUNFLOWER,
  EMOJI_PEACH,
  EMOJI_CONSTRUCTION,
  EMOJI_ROCKET,
  EMOJI_HOURGLASS_FLOWING,
  EMOJI_SPARKLES,
  EMOJI_BALLOON,
  EMOJI_PARTY,
  EMOJI_GIFT,
  EMOJI_MOBILE,
  EMOJI_KEYBOARD,
  EMOJI_ENVELOPE,
  EMOJI_SHOPPING_CART,
  EMOJI_WARNING,
  EMOJI_WHITE_CHECK_MARK,
  EMOJI_CROSS_MARK,
  EMOJI_LAST = EMOJI_CROSS_MARK
};


class Emoji : public kaleidoscope::Plugin {
 public:
  Emoji(void) {};
  EventHandlerResult onKeyswitchEvent(Key &mapped_key, byte row, byte col, uint8_t keyState);
};

} // namespace kaleidoscope

void emojiTypingWillStart();
void emojiTypingDidFinish();

extern kaleidoscope::Emoji Emoji;
