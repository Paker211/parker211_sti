"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
const AuthController_1 = __importDefault(require("../controllers/AuthController"));
const route_1 = __importDefault(require("./route"));
class AuthRoute extends route_1.default {
    constructor() {
        super();
        this.authController = new AuthController_1.default();
        this.setRoutes();
    }
    setRoutes() {
        this.router.get('/login', this.authController.echo);
    }
}
exports.default = AuthRoute;
