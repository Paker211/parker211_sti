"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
const controllers_1 = __importDefault(require("../controllers"));
const routes_1 = __importDefault(require("./routes"));
class AuthRoute extends routes_1.default {
    constructor() {
        super();
        this.authController = new controllers_1.default();
        this.prefix = '/auth';
        this.setRoutes();
    }
    setRoutes() {
        this.router.get('/login', this.authController.echo);
    }
}
exports.default = AuthRoute;
